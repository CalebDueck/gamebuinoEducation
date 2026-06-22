# Mission 03 - Buttons and Decisions

## Mission Brief
Use button input and if statements so the player can make the program react.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

**How This Contributes To Falling Stars**
This lesson teaches you how the game will react to button presses for controls, starting, and restarting.

## Key Terms
- Write an `if` statement.
- Use Gamebuino button constants.
- Choose `pressed()` for events and `repeat()` for held movement.

**Terms and Syntax**
- `if`
- `BTN_A`
- `BTN_B`
- `BTN_C`
- `pressed()`
- `repeat()`

**How It Works**
- An `if` statement checks whether something is true.
- If the condition inside `()` is true, the code inside `{}` runs.
- If the condition is false, that block is skipped.
- In this example, the popup happens only when A is pressed.
- `gb.popup(F("A!"), 15)` shows a short temporary message with popup-style feedback, then disappears on its own.
- `gb.display.print()` and `gb.display.println()` draw normal text as part of the current frame. They do not create popup behavior by themselves.
- Use `print()` when you want a label that stays on the screen. Use `popup()` when you want a short event message such as "A pressed" or "Door unlocked".
- `pressed()` is best for one-time actions such as menus, jumping, or a popup.
- `repeat()` is best for held movement because it returns `true` repeatedly while the button stays down.

## Starter File
Open `button_tester_starter.ino`.

## Objective
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

Scope note:

- Mission 03 is about detecting buttons and choosing reactions.
- Mission 04 is where the course first builds a score or lives system with variables.
- If you catch yourself wanting a counter that remembers values between button presses, that is the next mission on purpose.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

**Required Steps**
1. Add A and B first.
2. Add C.
3. Add one D-pad direction.
4. Add the remaining D-pad directions.
5. Explain which buttons use `pressed()` and why.

**Optional Extension**
Make a secret code: UP, UP, A displays a short message.

## Done When
- A and B show different feedback.
- All D-pad directions can be detected.
- C clears or changes the message.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
if (gb.buttons.pressed(BTN_A)) {
  gb.popup(F("A!"), 15);
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one message, mode, or button-response twist for now. Save score or lives tracking for Mission 04.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

**Quick Check**
When should a game use `pressed()` instead of `repeat()`?
