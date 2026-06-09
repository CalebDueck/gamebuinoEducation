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
Open `projects/04_score_counter/starter/score_counter_starter.ino`.

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

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
What value does your game need to remember between frames?
