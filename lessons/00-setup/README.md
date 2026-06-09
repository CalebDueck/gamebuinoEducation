# Mission 00 - Setup: Enter the Dev Kit

## Mission Brief
Get one known-good Gamebuino Classic sketch running so the class can trust the hardware before learning new code.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

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
Open `projects/00_welcome_badge/welcome_badge.ino`.

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

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Open the welcome badge sketch.
2. Compile before changing anything.
3. Upload to the Gamebuino Classic.
4. Change one short message.
5. Upload again and press A.

## Challenge Quest
Change the badge so it welcomes your team, table, or game studio.

## Checkpoint
- The title screen appears after upload.
- The changed message appears.
- Pressing A triggers the popup.

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
What proved that your computer was talking to the Gamebuino Classic?
