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
Open `projects/11_falling_stars/starter/falling_stars_starter.ino`.

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

## Debug Dungeon
Start with `debug-dungeon.md`. Then try the matching puzzle in `debug-puzzles.md` before asking for a solution.

## Power-Ups
Choose from `power-ups.md` after the checkpoint works. Power-Ups should change one rule, one visual, or one piece of feedback.

## Boss Fight
Combine this mission with one older mission. Keep the change small enough to test today.

## Reflection
Which function owns the rule for catching or missing a star?
