# Tilemaps

Use this stretch after you understand screen coordinates and movement.

Goal:

- build a level from many small repeated tiles instead of drawing every wall by hand

Core idea:

- a tilemap is a grid of tile numbers or symbols
- each tile represents one block such as floor, wall, water, or door
- the program reads the map and draws the right tile in each spot

Try this:

1. Make a tiny map using numbers or letters.
2. Pick one tile size such as `8x8`.
3. Loop through rows and columns.
4. Draw a wall tile when the map says wall.
5. Draw a floor tile when the map says floor.

Checkpoint:

- your level is built from repeated pieces
- changing one map row changes the visible layout
