# Mission 10 - Randomness

## Mission Brief
Use random placement to make each playthrough different.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Use `random()` with a range.
- Reset an object after collection.
- Seed randomness with `gb.pickRandomSeed()`.

## New Gear
- `random()`
- `spawn`
- `resetStar()`
- `gb.pickRandomSeed()`

## Starter File
Open `random_spawn_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
starX = random(0, LCDWIDTH - starW);
```

How `random()` works:

- `random(min, max)` picks a number in a range.
- The first number is the smallest possible value.
- The second number is the upper limit.
- In this lesson, that range keeps the object on screen instead of letting it spawn partly off the edge.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Find `resetStar()`.
2. Randomize x only.
3. Test several collections.
4. Randomize y in a safe range.
5. Explain why the range uses `LCDWIDTH - 4`.

## Challenge Quest
Add a rare bonus item or random point value.

## Checkpoint
- A collectible appears.
- Collecting it moves it to a random spot.
- Restarting the game does not always feel identical.

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
Why should random ranges avoid the right and bottom edges?
