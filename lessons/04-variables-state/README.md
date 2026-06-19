# Mission 04 - Variables Remember Game State

## Mission Brief
Use variables for values that change while a game is running.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Create and change an `int` variable.
- Use a `byte` for small whole-number values.
- Display score and lives.

## New Gear
- `int`
- `byte`
- `assignment`
- `score`
- `lives`

## Starter File
Open `score_counter_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
int score = 0;
```
```cpp
score = score + 1;
```

How variables and `=` work:

- A variable is a named place that stores a value.
- `int score = 0;` creates a variable named `score` and starts it at `0`.
- `=` means assignment, or "store this value here."
- `score = score + 1;` means take the old score, add `1`, and store the new score back into `score`.
- A `byte` stores small whole numbers from `0` to `255`, which is useful for things like lives or small counters.

Expected test results for this mission:

- Before pressing anything, the screen should show `Score: 0` and `Lives: 3`.
- After pressing A once, only `score` should change by `+1`.
- After pressing B once, only the value you chose for B should change by `-1`.
- After pressing C once, only the value you chose to reset should jump back to its start value.
- If one button press seems to do two jobs, check whether two `if` statements are listening for the same button constant.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Find the starting values for `score` and `lives`.
2. Make A increase score.
3. Make B subtract from score or lives.
4. Make C reset one variable.
5. Print both values on screen.

## Challenge Quest
Add a target score that displays Win when score reaches 10.

## Checkpoint
- Score starts at 0.
- A changes score by exactly 1.
- A second button changes or resets another value.
- Each button has one clear test result that you can describe before pressing it.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

This mission can also fail with logic bugs even when the sketch compiles.

Quick logic checks:

- Press A once. Did only `score` change?
- Press B once. Did the value change in the direction you expected?
- Press C once. Did only the reset behavior happen?
- If nothing changes, check whether your assignment line is inside the right `if` block.
- If the wrong value changes, check which variable name you edited.
- If two buttons act the same, check whether they both use the same `BTN_...` constant by accident.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
int score = 0
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Reflection
What value does your game need to remember between frames?
