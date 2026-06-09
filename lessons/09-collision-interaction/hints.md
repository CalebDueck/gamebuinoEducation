# Hints - Collision and Interaction

## Hint 1 - Find the Job
Read the TODO out loud. Is it asking you to change input, movement, drawing, score, lives, or reset behavior?

## Hint 2 - Use the Smallest Snippet
A useful clue for this mission is:

```cpp
if (gb.collideRectRect(playerX, playerY, playerW, playerH, coinX, coinY, coinW, coinH)) {
  score = score + 1;
}
```

Do not paste until you can say what each name means.

## Hint 3 - Change One Number
If the code works but you do not understand it yet, change one number, upload, and observe the result.

## Hint 4 - Ask a Better Question
Instead of "it does not work," try "I expected ___, but the Gamebuino shows ___."
