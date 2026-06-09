#!/usr/bin/env python3
import argparse
from pathlib import Path
from sprite_validator import FILLED, parse_sprite

def terminal(sprite):
    return "\n".join("".join("##" if c in FILLED else "  " for c in row) for row in sprite["rows"])

def svg(sprite, scale):
    width, height = sprite["width"], sprite["height"]
    parts = [f'<svg xmlns="http://www.w3.org/2000/svg" width="{width*scale}" height="{height*scale}" viewBox="0 0 {width*scale} {height*scale}">', '<rect width="100%" height="100%" fill="white"/>']
    for y, row in enumerate(sprite["rows"]):
        for x, c in enumerate(row):
            if c in FILLED:
                parts.append(f'<rect x="{x*scale}" y="{y*scale}" width="{scale}" height="{scale}" fill="black"/>')
    parts.append("</svg>")
    return "\n".join(parts)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("sprite")
    parser.add_argument("--svg")
    parser.add_argument("--scale", type=int, default=12)
    args = parser.parse_args()
    sprite = parse_sprite(args.sprite)
    if args.svg:
        Path(args.svg).write_text(svg(sprite, args.scale), encoding="utf-8")
    else:
        print(terminal(sprite))

if __name__ == "__main__":
    main()
