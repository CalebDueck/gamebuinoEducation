# Mission 11 - Falling Object Game

## Mission Brief
Combine movement, collision, randomness, score, lives, and game states into Falling Stars.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

## Learning Targets
- Update one game state at a time.
- Make a falling object reset.
- Use collision for scoring.
- Use lives and game over.

## New Gear
- `STATE_TITLE`
- `STATE_PLAYING`
- `STATE_GAME_OVER`
- `resetStar()`
- `updateStar()`

## Starter File
Open `falling_stars_starter.ino`.

## Quest Log
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
starY = starY + starSpeed;
```
```cpp
if (lives == 0) {
  gameState = STATE_GAME_OVER;
}
```

How `==` and game states work:

- `==` checks whether two values are equal.
- This is different from `=`, which changes a value.
- `if (lives == 0)` means "if lives is equal to zero."
- A game state is a label for the current mode of the game, such as title, playing, or game over.
- Changing `gameState` tells the program which part of the game should run next.
- Build and test one state at a time. Get the title screen working before the playing state, and get the playing state working before game over.

Expected staged test results:

- Title test: before pressing A, you should still be on the title screen.
- Start test: pressing A should move from title to playing.
- Movement test: LEFT and RIGHT should move only the player, not the star.
- Falling test: the star should move down every frame during play.
- Miss test: when the star reaches the bottom, one life should be lost and the star should reset to the top.
- Catch test: when the player catches the star, score should increase and the star should reset.
- Game-over test: when lives reaches `0`, the game should switch to the game-over screen.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

## Core Quest
1. Start at the title state and press A to play.
2. Complete player left/right movement.
3. Make the star fall.
4. Reset the star when it reaches the bottom.
5. Subtract a life on a miss.
6. Add catch collision and score.
7. Switch to game over at 0 lives.

## Challenge Quest
Increase star speed every 5 points.

## Checkpoint
- Player moves left and right.
- Star falls from the top.
- Score changes when caught.
- Lives change when missed.
- Game over appears at 0 lives.
- You can describe the expected result of the next state before you test it.

## Reference File

This lesson folder also includes `falling_stars_reference.ino`.

Do not open the reference sketch until you have passed these checkpoints:

1. Player moves left and right.
2. Star falls and resets after a miss.
3. Catching changes score.
4. Missing changes lives.
5. Game over appears at 0 lives.

When you do open the reference, use it for Code Archaeology: find one function, compare it to yours, then close the file and improve your own version.

## Bug Hunt
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

This mission can also fail with logic bugs even when it compiles.

Quick logic checks:

- If A does nothing on the title screen, inspect `updateTitle()`.
- If the player does not move, inspect `updatePlayer()`.
- If the star never moves, inspect `updateStar()` and the `starY` update line.
- If lives never change, test the miss path without trying to catch the star.
- If score changes too often, check whether the star resets immediately after a catch.
- If game over never appears, check the exact condition that switches `gameState`.

Try this tiny repair challenge before changing more of your own sketch:

```cpp
if (lives = 0) {
  gameState = STATE_GAME_OVER;
}
```

## Power-Ups
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

## Boss Fight
Add one new rule to Falling Stars, such as faster stars, a bonus catch, or an extra life pickup.

## Reflection
Which function owns the rule for catching or missing a star?
