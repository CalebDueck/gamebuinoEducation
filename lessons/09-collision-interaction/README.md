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

How rectangle collision works:

- A rectangle needs four numbers: `x`, `y`, `width`, and `height`.
- The first four values describe the player rectangle.
- The second four values describe the coin rectangle.
- If the two rectangles overlap, the condition becomes true and the code inside the `if` runs.

Expected test results for this mission:

- Before contact, the score should stay the same.
- When the player touches the coin, score should increase once for that collection.
- After collection, the coin should move away so the player is not still overlapping it.
- If score climbs very fast from one touch, the coin probably did not move far enough away after collection.

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
- One touch causes one collection result you can describe clearly.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

This mission can also fail with logic bugs even when it compiles.

Quick logic checks:

- Does score stay the same before contact?
- Does one touch change score once?
- After a collection, is the coin still touching the player?
- If score keeps increasing while you are standing still, check the coin reset code inside the collision block.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
if (gb.collideRectRect(playerX, playerY, playerW, playerH, coinX, coinY, coinW, coinH) {
  score = score + 1;
}
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Add a second collectible or a hazard, then make collision change score or lives.

## Reflection
What are the four numbers that describe one rectangle?
