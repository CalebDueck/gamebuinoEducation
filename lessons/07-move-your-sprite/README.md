# Mission 07 - Move Your Sprite

## Mission Brief
Replace the square with your own custom sprite and keep movement working.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Draw a bitmap at a changing position.
- Use sprite width and height for bounds.
- Keep custom art separate from game logic.

## New Gear
- `drawBitmap`
- `playerW`
- `playerH`
- `custom assets`

## Starter File
Open `move_your_sprite_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
gb.display.drawBitmap(playerX, playerY, HERO_EXAMPLE);
```

How sprite movement works:

- `drawBitmap(playerX, playerY, HERO_EXAMPLE)` uses `playerX` and `playerY` as the sprite's upper-left corner.
- `playerW` and `playerH` tell the program how much screen space the sprite uses.
- Bounds code needs the sprite size, or the picture can slide partly off the screen.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Draw the sprite at the starting position.
2. Move left and right.
3. Add screen bounds.
4. Add up/down or explain why your game only needs left/right.
5. Test with a second sprite if you made one.

## Challenge Quest
Flip between two costumes when moving.

## Checkpoint
- Your sprite appears.
- The sprite moves with input.
- It stays inside the screen.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
gb.display.drawBitmap(playerX, playerY, HERO_EXAMPLE)
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Replace the default sprite with your own and make it move without leaving the screen.

## Reflection
What changed when the square became a sprite?
