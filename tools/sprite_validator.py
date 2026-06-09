#!/usr/bin/env python3
import argparse
import re
from pathlib import Path

FILLED = set("X#1@")
EMPTY = set(".0- ")
ALLOWED = FILLED | EMPTY

class SpriteError(ValueError):
    pass

def slug_name(name):
    slug = re.sub(r"\W+", "_", name.strip()).strip("_").lower()
    if not slug or slug[0].isdigit():
        slug = "sprite_" + slug
    return slug

def parse_sprite(path):
    text = Path(path).read_text(encoding="utf-8").splitlines()
    meta = {}
    rows = []
    in_grid = False
    for line in text:
        if not in_grid and not line.strip():
            in_grid = True
            continue
        if not in_grid:
            if ":" not in line:
                raise SpriteError(f"{path}: metadata line needs key: value -> {line!r}")
            key, value = line.split(":", 1)
            meta[key.strip().lower()] = value.strip()
        else:
            if line or rows:
                rows.append(line.rstrip("\n"))
    raw_name = meta.get("name", "").strip()
    if not raw_name:
        raise SpriteError(f"{path}: missing name")
    name = slug_name(raw_name)
    try:
        width = int(meta["width"])
        height = int(meta["height"])
    except KeyError as exc:
        raise SpriteError(f"{path}: missing {exc.args[0]}") from exc
    except ValueError as exc:
        raise SpriteError(f"{path}: width and height must be numbers") from exc
    if not 1 <= width <= 32 or not 1 <= height <= 32:
        raise SpriteError(f"{path}: width and height must be between 1 and 32")
    if len(rows) != height:
        raise SpriteError(f"{path}: expected {height} rows, found {len(rows)}")
    filled = 0
    for i, row in enumerate(rows, 1):
        if len(row) != width:
            raise SpriteError(f"{path}: row {i} has width {len(row)}, expected {width}")
        bad = [c for c in row if c not in ALLOWED]
        if bad:
            raise SpriteError(f"{path}: row {i} has invalid pixel {bad[0]!r}")
        filled += sum(1 for c in row if c in FILLED)
    if filled == 0:
        raise SpriteError(f"{path}: sprite must contain at least one filled pixel")
    if filled == width * height:
        raise SpriteError(f"{path}: sprite is completely filled; leave at least one empty pixel")
    return {"name": name, "width": width, "height": height, "rows": rows}

def validate_path(path):
    parse_sprite(path)
    return True

def iter_default_sprites():
    for base in (Path("assets/sprites"), Path("class_gallery/submissions")):
        if base.exists():
            yield from sorted(base.glob("*.sprite.txt"))

def main():
    parser = argparse.ArgumentParser(description="Validate Gamebuino Classic ASCII sprite files.")
    parser.add_argument("paths", nargs="*", help=".sprite.txt files")
    parser.add_argument("--all", action="store_true", help="validate assets and class gallery sprites")
    args = parser.parse_args()
    paths = [Path(p) for p in args.paths]
    if args.all or not paths:
        paths.extend(iter_default_sprites())
    if not paths:
        raise SystemExit("No sprite files found.")
    failed = False
    for path in paths:
        try:
            sprite = parse_sprite(path)
            print(f"OK {path} ({sprite['width']}x{sprite['height']})")
        except SpriteError as exc:
            print(f"ERROR {exc}")
            failed = True
    raise SystemExit(1 if failed else 0)

if __name__ == "__main__":
    main()
