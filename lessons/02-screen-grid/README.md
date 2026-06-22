# Mission 02 - The Screen Is a Grid

## Mission Brief
Use coordinates to place pixels, rectangles, and circles exactly where you want them.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

**How This Contributes To Falling Stars**
This lesson teaches you how to place the player, stars, score, and screens in the right spots.

## Key Terms
- Describe the screen origin.
- Use x/y coordinates to place shapes.
- Use `LCDWIDTH` and `LCDHEIGHT` for screen edges.
- Experiment with more than one kind of drawing command.

**Terms and Syntax**
- `x coordinate`
- `y coordinate`
- `drawRect`
- `fillRect`
- `drawCircle`
- `fillCircle`
- `drawLine`
- `drawPixel`

**How It Works**
- `x` means left and right.
- `y` means up and down.
- `(0, 0)` is the upper-left corner of the screen.
- Bigger `x` moves right.
- Bigger `y` moves down.
- `LCDWIDTH` and `LCDHEIGHT` tell you the screen size, so you do not have to memorize the numbers.
- `drawRect(x, y, w, h)` uses position first, then size.
- `fillRect(x, y, w, h)` works the same way, but fills the shape in.
- `drawCircle(x, y, r)` uses a center point and a radius.
- `fillCircle(x, y, r)` fills the circle in.
- `drawLine(x1, y1, x2, y2)` connects two coordinate points.
- `drawPixel(x, y)` lights up one exact point, which is useful for tiny details like treasure marks or stars.

## Starter File
Open `screen_grid_starter.ino`.

## Objective
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
gb.display.fillRect(4, 4, 6, 6);
gb.display.drawRect(0, 0, LCDWIDTH, LCDHEIGHT);
gb.display.drawLine(10, 10, 20, 20);
gb.display.fillCircle(60, 20, 4);
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

**Required Steps**
1. Draw a border around the display.
2. Place one filled rectangle near the upper-left corner.
3. Place one circle near the upper-right corner.
4. Add two more shapes using coordinates you choose.
5. Change one coordinate and predict the movement before upload.

**Optional Extension**
Draw a mini map with a room, door, and treasure spot.

Shape ideas for the map:

- use `drawLine` for paths, walls, bridges, or arrows
- use `fillCircle` for treasure, trees, buttons, or ponds
- use `drawPixel` for stars, sparks, or tiny markers
- mix open shapes and filled shapes so different map parts read differently

## Done When
- A border fits the screen.
- At least four shapes appear.
- You can point to x and y for one shape.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
gb.display.fillRect(4, 4, 6, 6)
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Cosmetic idea: swap one rectangle or circle for a line path, filled circle, or pixel pattern.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

**Quick Check**
What happens to y when a shape moves down?
