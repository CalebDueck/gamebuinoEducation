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
Open `screen_grid_starter.ino`.

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

How screen coordinates work:

- `x` means left and right.
- `y` means up and down.
- `(0, 0)` is the upper-left corner of the screen.
- Bigger `x` moves right.
- Bigger `y` moves down.
- `LCDWIDTH` and `LCDHEIGHT` tell you the screen size, so you do not have to memorize the numbers.
- `drawRect(x, y, w, h)` uses position first, then size.
- `fillRect(x, y, w, h)` works the same way, but fills the shape in.

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

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
gb.display.fillRect(4, 4, 6, 6)
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Reflection
What happens to y when a shape moves down?
