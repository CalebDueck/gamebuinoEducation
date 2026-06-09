# Mission 03 - Buttons and Decisions

## Mission Brief
Use button input and if statements so the player can make the program react.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Write an `if` statement.
- Use Gamebuino button constants.
- Choose `pressed()` for events and `repeat()` for held movement.

## New Gear
- `if`
- `BTN_A`
- `BTN_B`
- `BTN_C`
- `pressed()`
- `repeat()`

## Starter File
Open `projects/03_button_tester/starter/button_tester_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
if (gb.buttons.pressed(BTN_A)) {
  gb.popup(F("A!"), 15);
}
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Test A and B first.
2. Add C.
3. Add one D-pad direction.
4. Add the remaining D-pad directions.
5. Explain which buttons use `pressed()` and why.

## Challenge Quest
Make a secret code: UP, UP, A displays a short message.

## Checkpoint
- A and B show different feedback.
- All D-pad directions can be detected.
- C clears or changes the message.

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
When should a game use `pressed()` instead of `repeat()`?
