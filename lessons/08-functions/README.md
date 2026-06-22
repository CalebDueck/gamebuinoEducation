# Mission 08 - Functions: Clean Up Your Spellbook

## Mission Brief
Move related code into named functions so the game is easier to read and debug.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

**How This Contributes To Falling Stars**
This lesson teaches you how to organize the game into readable parts like movement, drawing, and score display.

## Key Terms
- Call a function from `loop()`.
- Separate update code from drawing code.
- Name functions by the job they do.

**Terms and Syntax**
- `void`
- `updatePlayer()`
- `drawPlayer()`
- `drawHud()`

**How It Works**
- A function is a named chunk of code that does one job.
- `updatePlayer()` is a function name that means "run the player movement or player-update code."
- `drawPlayer()` is a function name that means "draw the player on screen."
- `drawHud()` is a function name that means "draw the heads-up display," such as score or other useful game info.
- `drawHud()` is the function name.
- When the program calls `drawHud();`, it runs the code inside that function.
- `void` means the function does work but does not send a value back.
- Breaking code into functions makes it easier to find the right place to fix a bug.

## Starter File
Open `functions_refactor_starter.ino`.

## Objective
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

Expected test results for this mission:

- If movement is broken, `updatePlayer()` is the first function to inspect.
- If the square disappears, `drawPlayer()` is the first function to inspect.
- If the score text is missing, `drawHud()` is the first function to inspect.
- A function only helps if the right job is placed inside it and the function is still called from `loop()`.

**Required Steps**
1. Find each function call in `loop()`.
2. Complete `updatePlayer()`.
3. Check that `drawPlayer()` still draws.
4. Add one line to `drawHud()`.
5. Explain which function you would inspect for a movement bug.

**Optional Extension**
Add `resetPlayer()` and call it when C is pressed.

## Done When
- Movement code lives in `updatePlayer()`.
- Drawing code lives in `drawPlayer()`.
- HUD code is separated.
- You can name which function to inspect for one specific bug.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
drawHud()
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

**Bigger Optional Build**
Move one repeated job into its own function, then call that function from the main loop.

**Quick Check**
Why is a named function easier to debug than one huge loop?
