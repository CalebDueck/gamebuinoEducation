# Mission 01 - Hello, Screen

## Mission Brief
Make the screen say something on purpose, then learn why the sketch redraws inside the update loop.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Print text on the 84x48 display.
- Explain why drawing happens inside `gb.update()`.
- Use short static strings with `F("...")`.

## New Gear
- `gb.display.print`
- `gb.display.println`
- `F("text")`
- `gb.frameCount`

## Starter File
Open `projects/01_hello_screen/starter/hello_screen_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
gb.display.println(F("My Game"));
```
```cpp
if (gb.frameCount % 20 < 10) {
  gb.display.println(F("Press A"));
}
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Predict where each printed line will appear.
2. Change the game title.
3. Add your name or team name.
4. Add a Press A prompt.
5. Test whether your text fits on the tiny screen.

## Challenge Quest
Make one line blink every half second using `gb.frameCount`.

## Checkpoint
- Your game title appears.
- Your name or team name appears.
- The prompt fits without running off the screen.

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
Why do you think the course starts with output before movement?
