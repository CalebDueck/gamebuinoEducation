# Debug Puzzle - Collision and Interaction

Each puzzle has one or two small bugs. Fix the bug, then explain why your fix works.

## Puzzle A - Prediction
Before editing, write what you expect the broken code to do.

## Puzzle B - Broken Snippet

```cpp
// The coin is visible, but collision feels too wide.
// Which size value is suspicious?
if (gb.collideRectRect(playerX, playerY, playerW, playerH, coinX, coinY, 20, coinH)) {
  score = score + 1;
}
```

## Puzzle C - Explain the Fix
What was broken: syntax, variable name, logic, or screen bounds?
