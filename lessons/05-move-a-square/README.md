# Mission 05 - Move a Square

## Mission Brief
Turn position variables into movement with the D-pad.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

**How This Contributes To Falling Stars**
This lesson teaches you how to move the player around the screen without letting it leave the play area.

## Key Terms
- Use `playerX` and `playerY` as position.
- Move with repeated button input.
- Clamp movement to the screen edges.

**Terms and Syntax**
- `position variables`
- `playerX`
- `playerY`
- `repeat()`
- `LCDWIDTH`
- `LCDHEIGHT`
- comparison operators

**How It Works**
- `playerX` is the variable that stores the square's left/right position.
- `playerY` is the variable that stores the square's up/down position.
- `repeat()` returns `true` repeatedly while a button stays held down, which makes it useful for movement.
- `LCDWIDTH` and `LCDHEIGHT` tell you the size of the screen, so bounds code can stop the square at the edges.
- Comparison operators ask a yes/no question.
- `>` means greater than.
- `<` means less than.
- `>=` means greater than or equal to.
- `<=` means less than or equal to.
- In this example, the code checks whether the square has moved past the bottom edge.
- `playerX` controls left and right movement.
- `playerY` controls up and down movement.

## Starter File
Open `moving_square_starter.ino`.

## Objective
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

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

Expected test results for this mission:

- Before pressing anything, the square should stay still on screen.
- LEFT and RIGHT should change only `playerX`.
- UP and DOWN should change only `playerY`.
- After you add bounds, the square should stop at the screen edges instead of disappearing off screen.

**Required Steps**
1. Run the starter and identify the square.
2. Add LEFT and RIGHT movement.
3. Test and explain what changed.
4. Add UP and DOWN movement.
5. Add x-axis and y-axis bounds.
6. Try changing `playerW` or `playerH`.

**Optional Extension**
Hold B to move faster without changing normal speed.

## Done When
- A square appears.
- All four D-pad directions move it.
- The square cannot leave the screen.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
if (gb.buttons.repeat(BTN_UP, 1)) {
  playerY = playerY - 1
}
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

**Quick Check**
Which variable changes when the square moves right?
