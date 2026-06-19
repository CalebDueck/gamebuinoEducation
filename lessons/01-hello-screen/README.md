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
Open `hello_screen_starter.ino`.

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
} else {
  gb.display.println();
}
```

How `gb.frameCount` and `%` work:

- `gb.frameCount` is a number that goes up by `1` each time a new frame is drawn.
- You can treat it like a built-in timer that keeps counting while the game runs.
- `%` means modulo, or remainder after division.
- `gb.frameCount % 20` gives a value from `0` to `19`, then starts over.
- That means the condition is true for part of the cycle and false for part of the cycle, which makes blinking possible.
- Example: `7 % 3` is `1` because `7` divided by `3` leaves remainder `1`.
- `gb.update()` is the timing gate for one frame. Put your drawing inside it so the screen refreshes in a clean, steady loop.
- `F("text")` stores a fixed message efficiently so the Gamebuino has more working memory left for the game.
- If you blink a line with `println`, keep that line reserved. Print the message when the condition is true, and print a blank line when it is false, so the lines below do not jump upward.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Predict where each printed line will appear.
2. Change the game title.
3. Add your name or project name.
4. Add a Press A prompt.
5. Test whether your text fits on the tiny screen.

## Challenge Quest
Make one line blink every half second using `gb.frameCount`.

Tip: Blink the prompt line, not the title line. Keep the title and name printed every frame.

## Checkpoint
- Your game title appears.
- Your name or project name appears.
- The prompt fits without running off the screen.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
gb.display.println(F("My Game")
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Reflection
Why do you think the course starts with output before movement?
