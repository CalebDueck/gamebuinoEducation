# Mission 10 - Randomness

## Mission Brief
Use random placement to make each playthrough different.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

**How This Contributes To Falling Stars**
This lesson teaches you how to make new stars appear in fresh places instead of the exact same spot every time.

## Key Terms
- Use `random()` with a range.
- Reset an object after collection.
- Seed randomness with `gb.pickRandomSeed()`.

**Terms and Syntax**
- `random()`
- `spawn`
- `resetStar()`
- `gb.pickRandomSeed()`

**How It Works**
- `random(min, max)` picks a number in a range.
- A `spawn` is the place where an object appears.
- `resetStar()` is a helper function that moves the star back to a fresh starting spot.
- `gb.pickRandomSeed()` helps the Gamebuino start the random system from a less predictable value, so each run does not feel exactly the same.
- The first number is the smallest possible value.
- The second number is the upper limit, but it is not included.
- That means `random(0, 5)` can never return `5`.
- In this lesson, that range keeps the object on screen instead of letting it spawn partly off the edge.
- Example: `random(0, 5)` can return `0`, `1`, `2`, `3`, or `4`.

## Starter File
Open `random_spawn_starter.ino`.

## Objective
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
starX = random(0, LCDWIDTH - starW);
```

Expected test results for this mission:

- Before you finish `resetStar()`, the collectible may keep returning to the same place.
- After randomizing `starX`, repeated collections should move the collectible to different horizontal positions.
- After randomizing `starY`, repeated collections should move it to different safe vertical positions too.
- If the collectible partly disappears off screen, check whether your max range forgot to subtract the object size.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

**Required Steps**
1. Find `resetStar()`.
2. Randomize x only.
3. Test several collections.
4. Randomize y in a safe range.
5. Explain why the range uses `LCDWIDTH - 4`.

**Optional Extension**
Add a rare bonus item or random point value.

## Done When
- A collectible appears.
- Collecting it moves it to a random spot.
- Restarting the game does not always feel identical.
- You can explain why the top random limit is excluded.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
starX = random(0, LCDWIDTH - starW
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

**Bigger Optional Build**
Make an object respawn at a random x position after it is collected or leaves the screen.

**Quick Check**
Why should random ranges avoid the right and bottom edges?
