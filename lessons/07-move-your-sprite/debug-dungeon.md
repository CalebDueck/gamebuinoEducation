# Debug Dungeon - Move Your Sprite

- **Does not compile:** read the first red error, then check the line above it for a missing semicolon or brace.
- **Uploads but screen is blank:** confirm the sketch includes `gb.begin()` in `setup()` and draws inside `if (gb.update())`.
- **Button seems too fast:** use `pressed()` for one-time events and `repeat()` for movement.
- **Object disappears:** check x/y values and compare them with `LCDWIDTH` and `LCDHEIGHT`.
