# Mission 00 - Setup: Enter the Dev Kit

## Mission Brief
Get one known-good Gamebuino Classic sketch running so you can trust the hardware before learning new code.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

If this is your first programming language, keep `ARDUINO_FUNDAMENTALS.md` open while you work.

**How This Contributes To Falling Stars**
This lesson makes sure your computer can compile, upload, and talk to the device you will use to build the full game.

## Key Terms
- Open a sketch in the Arduino IDE.
- Compile and upload to a Gamebuino Classic.
- Change one small message and test the result.

**Terms and Syntax**
- `sketch`
- `setup()`
- `loop()`
- `compile`
- `upload`

**How It Works**
- `setup()` runs once when the Gamebuino starts.
- `loop()` runs again and again while the Gamebuino is on.
- Many game actions happen inside `loop()` because input, drawing, and movement need to keep updating.
- A `sketch` is just an Arduino program file.
- `compile` checks your code for mistakes.
- `upload` sends the compiled sketch to the Gamebuino.

## Starter File
Open `welcome_badge.ino`.

## Objective
1. Read the `TODO` labels in the starter comments before changing code.
2. Predict the visible result of the next `TODO`.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

If setup is blocked, pause the code edits and use `SETUP_GAMEBUINO_CLASSIC.md` to verify the board, port, cable, and library first.

Useful snippet card:

```cpp
// Change only one short message first.
gb.display.println(F("Ready!"));
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

**Required Steps**
1. Open the welcome badge sketch.
2. Compile before changing anything.
3. Upload to the Gamebuino Classic.
4. Change one short message under a `TODO` comment.
5. Upload again and press A.

**Optional Extension**
Change the badge so it welcomes you, your project name, or your game studio.

## Done When
- The title screen appears after upload.
- The changed message appears.
- Pressing A triggers the popup.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
gb.display.println(F("Ready!"))
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change `Welcome`, `Classic Quest`, or `Press A` to your own theme.
- Feel: change the popup message, add a second button action, or make B show a different popup than A.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

For Mission 00, "button feel" means what a button does, which button triggers it, or how long the popup feedback lasts. A small example is changing the popup text or changing the `25` popup duration.

**Quick Check**
What proved that your computer was talking to the Gamebuino Classic?
