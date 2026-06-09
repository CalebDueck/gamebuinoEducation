#!/usr/bin/env python3
import argparse
from pathlib import Path
from sprite_validator import FILLED, parse_sprite, slug_name

def pack_rows(sprite):
    packed = []
    width = sprite["width"]
    for row in sprite["rows"]:
        row_bytes = []
        for start in range(0, width, 8):
            value = 0
            for bit in range(8):
                x = start + bit
                value <<= 1
                if x < width and row[x] in FILLED:
                    value |= 1
            row_bytes.append(value)
        packed.extend(row_bytes)
    return packed

def header_for(sprite, name=None):
    symbol = slug_name(name or sprite["name"]).upper()
    lines = ["#pragma once", "#include <avr/pgmspace.h>", "", f"const uint8_t {symbol}[] PROGMEM = {{", f"  {sprite['width']}, {sprite['height']},"]
    for value in pack_rows(sprite):
        lines.append(f"  0b{value:08b},")
    lines.append("};")
    lines.append("")
    return "\n".join(lines)

def main():
    parser = argparse.ArgumentParser(description="Convert ASCII sprites to Gamebuino Classic bitmap headers.")
    parser.add_argument("sprite")
    parser.add_argument("--name")
    parser.add_argument("--out")
    args = parser.parse_args()
    sprite = parse_sprite(args.sprite)
    output = header_for(sprite, args.name)
    if args.out:
        Path(args.out).parent.mkdir(parents=True, exist_ok=True)
        Path(args.out).write_text(output, encoding="utf-8")
    else:
        print(output)

if __name__ == "__main__":
    main()
