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
Open `projects/07_move_your_sprite/starter/move_your_sprite_starter.ino`.

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

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
What changed when the square became a sprite?
