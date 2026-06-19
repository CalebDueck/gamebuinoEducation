# Mission 13 - Final Project: Build Your Own Cartridge

## Mission Brief
Plan, build, test, and explain a small custom Gamebuino Classic game.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Choose a scoped game idea.
- Build required mechanics first.
- Customize after the core works.
- Explain the game in a README.

## New Gear
- `prototype`
- `scope`
- `requirements`
- `iteration`

## Starter File
Open `templates/` and choose one game idea folder. Each folder includes a planning `README.md` and a runnable `*_starter.ino` sketch.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
Required: input, visible player, one interaction, one function, start or game-over screen, README.
```

How to scope the project:

- A `prototype` is the smallest version that proves the game idea works.
- `scope` means deciding what fits in the time you have.
- `iteration` means building a simple version first, then improving it in small passes.
- Write the README as a short player guide next to your sketch or inside your project folder.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Choose one template.
2. Write your required features.
3. Build input and drawing first.
4. Add scoring, lives, timer, or progress.
5. Add one interaction.
6. Add a start or game-over screen.
7. Write the README with the game goal, controls, and win or loss condition.

## Challenge Quest
Add one advanced feature from the project menu.

## Checkpoint
- A playable prototype exists.
- At least one function is used.
- A README explains controls and customization.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
if (gb.buttons.pressed(BTN_A) {
  gameState = STATE_PLAYING;
}
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Finish one complete playable version with controls, a goal, and a start or game-over screen.

## Reflection
What did you cut or simplify so the game could actually ship?
