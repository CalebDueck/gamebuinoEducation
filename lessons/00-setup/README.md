# Mission 00 - Setup: Enter the Dev Kit

## Mission Brief
Get one known-good Gamebuino Classic sketch running so you can trust the hardware before learning new code.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

If this is your first programming language, keep `ARDUINO_FUNDAMENTALS.md` open while you work.

## Learning Targets
- Open a sketch in the Arduino IDE.
- Compile and upload to a Gamebuino Classic.
- Change one small message and test the result.

## New Gear
- `sketch`
- `setup()`
- `loop()`
- `compile`
- `upload`

## Starter File
Open `welcome_badge.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
// Change only one short message first.
gb.display.println(F("Ready!"));
```

How `setup()` and `loop()` work:

- `setup()` runs once when the Gamebuino starts.
- `loop()` runs again and again while the Gamebuino is on.
- Many game actions happen inside `loop()` because input, drawing, and movement need to keep updating.
- A `sketch` is just an Arduino program file.
- `compile` checks your code for mistakes.
- `upload` sends the compiled sketch to the Gamebuino.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Open the welcome badge sketch.
2. Compile before changing anything.
3. Upload to the Gamebuino Classic.
4. Change one short message.
5. Upload again and press A.

## Challenge Quest
Change the badge so it welcomes you, your project name, or your game studio.

## Checkpoint
- The title screen appears after upload.
- The changed message appears.
- Pressing A triggers the popup.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
gb.display.println(F("Ready!"))
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Reflection
What proved that your computer was talking to the Gamebuino Classic?
