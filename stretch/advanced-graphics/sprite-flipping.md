# Sprite Flipping

Use this stretch when you want a character to face left and right without redrawing everything from scratch.

Goal:

- show one sprite when moving right and a mirrored or alternate version when moving left

Core idea:

- the Gamebuino Classic does not automatically mirror your bitmap for you
- the usual beginner-friendly solution is to prepare a left-facing sprite and a right-facing sprite

Try this:

1. Make or copy two versions of the same sprite.
2. Draw the right-facing sprite when moving right.
3. Draw the left-facing sprite when moving left.

Checkpoint:

- the character faces the direction it is moving
- the movement code still works
