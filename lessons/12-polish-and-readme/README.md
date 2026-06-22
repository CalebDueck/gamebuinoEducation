# Mission 12 - Polish, README, and Sharing

## Mission Brief
Make your game understandable, testable, and more fun to return to later.

You are not trying to type a finished game all at once. You are collecting one piece of new gear, testing it, and then using it in the Falling Stars questline.

**How This Contributes To Falling Stars**
This lesson teaches you how to make Falling Stars clear, replayable, and understandable to another player.

## Key Terms
- Write clear controls.
- Playtest by stepping away, then returning with fresh eyes.
- Add one polish feature without breaking the core game.

**Terms and Syntax**
- `README`
- `playtesting`
- `credits`
- `changelog`

**How It Works**
- A `README` is a short note for the next player or for future-you.
- It should answer three things first: what the game is, how to control it, and how the game ends.
- A playtest means you stop building, play the game as if you were new to it, and write down one confusing moment.
- A changelog can be one short list of what you improved after testing.
- For this mission, a simple markdown note next to your sketch is enough. It does not need to be long.
- A clear option is to create a file named `README-player.md` inside `lessons/12-polish-and-readme/` or inside your own final project folder.

## Starter File
Open `polished_game_starter.ino`.

## Objective
1. Read the TODO labels in the starter before changing code.
2. Predict the visible result of the next TODO.
3. Add one small snippet or one small edit.
4. Compile and upload before moving on.
5. Check the screen and buttons, then write what changed.

Useful snippet card:

```cpp
Controls: LEFT/RIGHT move. A restarts after game over.
```

Expected test results for this mission:

- A new player should be able to read your note and start playing without asking what the controls are.
- After your playtest fix, one confusing moment should be gone or reduced.
- Your polish change should improve clarity or feel without breaking the core game loop.

Do not paste a finished sketch from another file. If you use a snippet card, explain which variable or Gamebuino command it changes.

**Required Steps**
1. Write the game title and goal in a short player README.
2. Document controls and restart rules.
3. Put the game down, come back later, and try it without reading your notes.
4. Fix one confusing moment.
5. Add one polish change.

**Optional Extension**
Add a title screen, credits line, or difficulty choice.

## Done When
- A title or start screen exists.
- Controls are documented.
- You can play it again without guessing the controls.
- Your README lives in a clear place you can point to.

**If You Get Stuck**
If you get stuck, check the line above the first error message first. Missing semicolons, missing braces, wrong capitalization, and code outside the right function cause a lot of beginner bugs.

Try this tiny repair challenge before changing more of your own sketch:

```md
# Falling Stars
Controls LEFT/RIGHT move
```

**Optional Upgrades**
After the checkpoint works, try one small upgrade inside this same sketch:

- Cosmetic: change text, shape, sprite, layout, or theme.
- Feel: change speed, timing, feedback, or button behavior.
- Rule: add one score, life, timer, win, or loss twist.
- Debug: make one tiny bug on purpose, then fix it and explain the fix.

**Bigger Optional Build**
Make one change from playtest feedback, then update the README so another player knows the controls and goal.

**Quick Check**
What did a playtester notice that you missed?
