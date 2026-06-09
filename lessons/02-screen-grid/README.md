# Mission 02 - The Screen Is a Grid

## Mission Brief
Use coordinates to place pixels, rectangles, and circles exactly where you want them.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Describe the screen origin.
- Use x/y coordinates to place shapes.
- Use `LCDWIDTH` and `LCDHEIGHT` for screen edges.

## New Gear
- `x coordinate`
- `y coordinate`
- `drawRect`
- `fillRect`
- `drawCircle`

## Starter File
Open `projects/02_screen_grid/starter/screen_grid_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
gb.display.fillRect(4, 4, 6, 6);
```
```cpp
gb.display.drawRect(0, 0, LCDWIDTH, LCDHEIGHT);
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Draw a border around the display.
2. Place one filled rectangle near the upper-left corner.
3. Place one circle near the upper-right corner.
4. Add two more shapes using coordinates you choose.
5. Change one coordinate and predict the movement before upload.

## Challenge Quest
Draw a mini map with a room, door, and treasure spot.

## Checkpoint
- A border fits the screen.
- At least four shapes appear.
- You can point to x and y for one shape.

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
What happens to y when a shape moves down?
