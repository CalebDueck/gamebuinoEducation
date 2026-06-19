# Mission 06 - Monochrome Sprites

## Mission Brief
Create a custom ASCII-art sprite, validate it, convert it, and display it as a Gamebuino Classic bitmap.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Read an ASCII sprite grid.
- Validate sprite dimensions.
- Convert a sprite to a bitmap header.
- Display a bitmap with `drawBitmap`.

## New Gear
- `.sprite.txt`
- `width and height`
- `PROGMEM`
- `drawBitmap`

## Starter File
Open `sprite_lab_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```bash
python3 tools/sprite_validator.py assets/sprites/hero_example.sprite.txt
```
```bash
python3 tools/sprite_to_bitmap.py assets/sprites/hero_example.sprite.txt --out assets/generated/example_sprites.h
```

How sprite files and tools work:

- A `.sprite.txt` file is a tiny picture made from text characters in a grid.
- Each row needs the same number of columns, or the converter will not know the sprite width.
- `python3 tools/sprite_validator.py ...` checks whether the text sprite has valid rows and dimensions.
- `python3 tools/sprite_to_bitmap.py ...` turns that text sprite into C++ bitmap data the Gamebuino can draw.
- Run those commands from the repo root folder.
- `PROGMEM` means the bitmap is stored as fixed data instead of taking up scarce working memory.
- `drawBitmap(x, y, SPRITE_NAME)` draws that fixed image at one screen position.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Open `assets/sprites/hero_example.sprite.txt`.
2. Change three pixels, then validate it.
3. Convert the sprite to a header.
4. Open the sprite lab starter.
5. Draw the generated bitmap.
6. Save a separate sprite gallery file if you want to include it in the gallery later.

## Challenge Quest
Create a second 8x8 item sprite for Falling Stars.

## Checkpoint
- Your sprite validates.
- The terminal preview matches your art.
- The sprite appears on the Gamebuino screen.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```txt
.##.....
..#....
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Draw your custom sprite on screen and add one short label under it.

## Reflection
How is a sprite like a tiny grid of yes/no choices?
