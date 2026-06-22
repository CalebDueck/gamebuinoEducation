# Mission 07 - Move Your Sprite

## Mission Brief
Replace the square with your own custom sprite and keep movement working.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

**How This Contributes To Falling Stars**
This lesson teaches you how to move a character instead of moving a basic shape.

## Key Terms
- Draw a bitmap at a changing position.
- Use sprite width and height for bounds.
- Keep custom art separate from game logic.

**Terms and Syntax**
- `drawBitmap`
- `playerW`
- `playerH`
- `custom assets`

**How It Works**
- `drawBitmap(playerX, playerY, HERO_EXAMPLE)` uses `playerX` and `playerY` as the sprite's upper-left corner.
- `playerW` and `playerH` tell the program how much screen space the sprite uses.
- Bounds code needs the sprite size, or the picture can slide partly off the screen.
- The generated sprite data file is not stored in this lesson folder. It lives in `assets/generated/`.

## Starter File
Open `move_your_sprite_starter.ino`.

Important file location note:

- This starter uses the generated sprite header from the repo-wide `assets/` folder, not from `lessons/07-move-your-sprite/`.
- The default include points to `assets/generated/example_sprites.h`.
- If you made your own sprite in Mission 06, convert it into `assets/generated/` first, then update the include only if your file name is different.

## Objective
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
gb.display.drawBitmap(playerX, playerY, HERO_EXAMPLE);
```

Expected test results for this mission:

- Before movement code changes, the sprite should appear at its starting position.
- LEFT and RIGHT should move the sprite without changing `playerY`.
- After bounds are added, the sprite should stop at the screen edges instead of clipping off screen.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

**Required Steps**
1. Draw the sprite at the starting position.
2. Move left and right.
3. Add screen bounds.
4. Add up/down or explain why your game only needs left/right.
5. Test with a second sprite if you made one.

**Optional Extension**
Flip between two costumes when moving.

## Done When
- Your sprite appears.
- The sprite moves with input.
- It stays inside the screen.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
gb.display.drawBitmap(playerX, playerY, HERO_EXAMPLE)
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

**Bigger Optional Build**
Replace the default sprite with your own and make it move without leaving the screen.

**Quick Check**
What changed when the square became a sprite?
