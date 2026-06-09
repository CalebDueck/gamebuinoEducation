#!/usr/bin/env python3
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).parent))
from sprite_to_bitmap import header_for
from sprite_validator import parse_sprite

SUBMISSIONS = Path("class_gallery/submissions")
OUT = Path("class_gallery/generated/gallery_sprites.h")
INDEX = Path("class_gallery/generated/gallery_index.md")

def main():
    sprites = [parse_sprite(path) for path in sorted(SUBMISSIONS.glob("*.sprite.txt"))]
    OUT.parent.mkdir(parents=True, exist_ok=True)
    chunks = ["#pragma once", "#include <avr/pgmspace.h>", ""]
    index = ["# Gallery Index", ""]
    for sprite in sprites:
        chunks.append(header_for(sprite).replace("#pragma once\n#include <avr/pgmspace.h>\n\n", ""))
        index.append(f"- {sprite['name']} ({sprite['width']}x{sprite['height']})")
    OUT.write_text("\n".join(chunks), encoding="utf-8")
    INDEX.write_text("\n".join(index) + "\n", encoding="utf-8")
    print(f"Built {len(sprites)} gallery sprites.")

if __name__ == "__main__":
    main()
