# Mission 12 - Polish, README, and Sharing

## Mission Brief
Make your game understandable, testable, and more fun to return to later.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Write clear controls.
- Playtest by stepping away, then returning with fresh eyes.
- Add one polish feature without breaking the core game.

## New Gear
- `README`
- `playtesting`
- `credits`
- `changelog`

## Starter File
Open `polished_game_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
Controls: LEFT/RIGHT move. A restarts after game over.
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Write the game title and goal.
2. Document controls.
3. Put the game down, come back later, and try it without reading your notes.
4. Fix one confusing moment.
5. Add one polish change.

## Challenge Quest
Add a title screen, credits line, or difficulty choice.

## Checkpoint
- A title or start screen exists.
- Controls are documented.
- You can play it again without guessing the controls.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
// Finish the broken line and explain what was missing.
if (gb.buttons.pressed(BTN_A)) {
  score = score + 1
}
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
What did a playtester notice that you missed?
