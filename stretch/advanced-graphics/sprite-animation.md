# Sprite Animation

Use this stretch after custom sprites and movement.

Goal:

- switch between two or more sprite images to make a character look alive

Core idea:

- one frame is one still image
- animation changes which bitmap is drawn
- `gb.frameCount` can control when to swap frames

Try this:

1. Make two simple frames of the same character.
2. Draw frame A for a short time, then frame B.
3. Slow the swap down if it flickers too fast.

Useful rule:

- change animation only every few frames, not every single loop

Checkpoint:

- the sprite changes appearance on purpose
- you can explain what decides when the next frame appears
