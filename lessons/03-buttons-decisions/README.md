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
Open `button_tester_starter.ino`.

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

How `if` works:

- An `if` statement checks whether something is true.
- If the condition inside `()` is true, the code inside `{}` runs.
- If the condition is false, that block is skipped.
- In this example, the popup happens only when A is pressed.

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
When should a game use `pressed()` instead of `repeat()`?
