# Scrolling Camera

Use this stretch after movement and sprites.

Goal:

- make the world feel larger than the 84x48 screen by moving the camera instead of moving every object the same way

Core idea:

- world coordinates describe where something is in the level
- camera coordinates describe which part of the level is currently visible
- screen coordinates are what you finally draw on the display

Starter thinking:

- keep `playerX` and `playerY` as world position
- create `cameraX` and `cameraY`
- draw objects at `worldX - cameraX` and `worldY - cameraY`

Try this:

1. Make a level wider than the screen.
2. Let the player move left and right.
3. Keep the player near the middle while the camera scrolls.

Checkpoint:

- the player can move through a space larger than one screen
- objects appear and disappear as the camera moves
