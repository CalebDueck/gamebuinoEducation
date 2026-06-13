# Mission 09 - Collision and Interaction

## Mission Brief
Make the game react when two rectangles touch.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Use rectangle collision.
- Change score after contact.
- Move or reset an item after collection.

## New Gear
- `gb.collideRectRect`
- `collectible`
- `score feedback`

## Starter File
Open `coin_collector_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
if (gb.collideRectRect(playerX, playerY, playerW, playerH, coinX, coinY, coinW, coinH)) {
  score = score + 1;
}
```

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Move the player into the coin.
2. Read the collision condition.
3. Make score increase once per collection.
4. Move the coin after collection.
5. Add a visible or sound response.

## Challenge Quest
Add a hazard that costs one life.

## Checkpoint
- Player and coin both appear.
- Touching the coin increases score.
- The coin moves or resets after collection.

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
What are the four numbers that describe one rectangle?
