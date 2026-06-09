# Debug Dungeon - Polish, README, and Sharing

## First Door - Compile
- Missing semicolon? Check the line above the red error.
- Missing brace? Count `{
}` pairs around the function you edited.
- Unknown name? Check capitalization, especially `BTN_A`, `LCDWIDTH`, and variable names.

## Second Door - Screen
- Blank screen: drawing usually belongs inside `if (gb.update())`.
- Text runs off screen: shorten the message and test again.
- Shape is gone: print or reason about x/y and compare with `LCDWIDTH` and `LCDHEIGHT`.

## Third Door - Buttons
- Use `pressed()` for one tap.
- Use `repeat()` for movement while held.
- If a value changes too fast, you probably used a held/repeating input for an event.

## Final Door - Explain
Point to the exact line that should cause the visible behavior. If you cannot find one, the next bug is probably in the wrong function.
