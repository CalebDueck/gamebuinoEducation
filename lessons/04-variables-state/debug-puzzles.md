# Debug Puzzle - Variables Remember Game State

Each puzzle has one or two small bugs. Fix the bug, then explain why your fix works.

## Puzzle A - Prediction
Before editing, write what you expect the broken code to do.

## Puzzle B - Broken Snippet

```cpp
// Pressing A should add 1 point.
// Why does the score reset every frame?
if (gb.buttons.pressed(BTN_A)) {
  int score = 0;
  score = score + 1;
}
```

## Puzzle C - Explain the Fix
What was broken: syntax, variable name, logic, or screen bounds?
