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
Open `functions_refactor_starter.ino`.

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

How functions work:

- A function is a named chunk of code that does one job.
- `drawHud()` is the function name.
- When the program calls `drawHud();`, it runs the code inside that function.
- `void` means the function does work but does not send a value back.
- Breaking code into functions makes it easier to find the right place to fix a bug.

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

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
drawHud()
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Move one repeated job into its own function, then call that function from the main loop.

## Reflection
Why is a named function easier to debug than one huge loop?
