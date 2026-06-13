# Mission 05 - Move a Square

## Mission Brief
Turn position variables into movement with the D-pad.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Use `playerX` and `playerY` as position.
- Move with repeated button input.
- Clamp movement to the screen edges.

## New Gear
- `position variables`
- `movement speed`
- `repeat()`
- `LCDWIDTH`
- `LCDHEIGHT`

## Starter File
Open `moving_square_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
if (gb.buttons.repeat(BTN_UP, 1)) {
  playerY = playerY - 1;
}
```
```cpp
if (playerY + playerH > LCDHEIGHT) {
  playerY = LCDHEIGHT - playerH;
}
```

How comparisons work:

- Comparison operators ask a yes/no question.
- `>` means greater than.
- `<` means less than.
- `>=` means greater than or equal to.
- `<=` means less than or equal to.
- In this example, the code checks whether the square has moved past the bottom edge.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Run the starter and identify the square.
2. Add UP movement only.
3. Test and explain what changed.
4. Add DOWN movement.
5. Add y-axis bounds.
6. Try changing `playerW` or `playerH`.

## Challenge Quest
Hold B to move faster without changing normal speed.

## Checkpoint
- A square appears.
- All four D-pad directions move it.
- The square cannot leave the screen.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
// Finish the broken line and explain what was missing.
if (gb.buttons.pressed(BTN_A)) {
  score = score + 1
}
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
Which variable changes when the square moves right?
