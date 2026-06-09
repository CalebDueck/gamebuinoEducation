# Mission 08 - Functions: Clean Up Your Spellbook

## Mission Brief
Move related code into named functions so the game is easier to read and debug.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Call a function from `loop()`.
- Separate update code from drawing code.
- Name functions by the job they do.

## New Gear
- `void`
- `updatePlayer()`
- `drawPlayer()`
- `drawHud()`

## Starter File
Open `projects/08_functions_refactor/starter/functions_refactor_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
void drawHud() {
  gb.display.print(F("Score: "));
  gb.display.println(score);
}
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Find each function call in `loop()`.
2. Complete `updatePlayer()`.
3. Check that `drawPlayer()` still draws.
4. Add one line to `drawHud()`.
5. Explain which function you would inspect for a movement bug.

## Challenge Quest
Add `resetPlayer()` and call it when C is pressed.

## Checkpoint
- Movement code lives in `updatePlayer()`.
- Drawing code lives in `drawPlayer()`.
- HUD code is separated.

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
Why is a named function easier to debug than one huge loop?
