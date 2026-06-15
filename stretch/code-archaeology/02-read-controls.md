# Read Official Controls

Official example:

- https://raw.githubusercontent.com/Gamebuino/Gamebuino-Classic/master/examples/1.Basics/c_Controls/c_Controls.ino

Focus questions:

- Which buttons use `pressed()` and which use `repeat()`?
- Which lines change what the player sees?
- How does the sketch separate input from drawing?

What to notice:

- one button press can trigger a one-time event
- held buttons can trigger repeated movement
- simple examples often redraw the whole screen each frame

Small change ideas:

- add one new D-pad response
- change the popup message
- swap one `pressed()` use to `repeat()` and observe the difference

Checkpoint:

- You can explain the visible difference between `pressed()` and `repeat()`.
