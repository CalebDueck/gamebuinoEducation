# Course Guide

This guide is for teachers, parents, mentors, and anyone supporting the course. It explains the learning path, support philosophy, and build norms around the learner-facing lesson READMEs.

If you have never programmed before, start by skimming `ARDUINO_FUNDAMENTALS.md`.

If you are the learner, you can skip this file and stay inside the numbered lesson folders.

## Course Arc

Use Missions 00-05 for fast visible wins, Missions 06-11 for the capstone build, Mission 12 for polish and sharing, and Mission 13 for multi-session final projects.

The progression is:

setup -> screen output -> coordinates -> buttons -> variables -> movement -> sprites -> functions -> collision -> randomness -> score/lives/game states -> complete game -> polish/share

The core path is beginner-friendly. Challenge Quests, Power-Ups, Boss Fights, debugging stretch quests, Code Archaeology, Git, and multiplayer stretch advanced gameBuilders without raising the floor for everyone else.

## Falling Stars Debrief

The core path is building toward one known target: `Falling Stars`.

By the end of Mission 11, learners are assembling a game with:

- a title screen
- a player near the bottom of the screen
- left/right movement
- a falling object
- collision for catches
- score for success
- lives for misses
- random respawn positions
- a game-over state

Make that target visible early. Learners should know from the first missions that they are checking off parts of one final build, not completing unrelated mini-tasks.

## Hardware Scope

This repo targets Gamebuino Classic only:

- Arduino C++ sketches
- 84x48 monochrome display
- D-pad plus A, B, and C buttons
- speaker
- optional micro SD card
- I2C extension ports for advanced multiplayer experiments

Do not substitute Gamebuino META, Python, CircuitPython, or Python Academy materials for the core course.

## Mission Rhythm

1. Demo the visible goal in under two minutes.
2. GameBuilders read the first TODO and make a prediction.
3. GameBuilders make one small edit.
4. Compile and upload.
5. GameBuilders verify the checkpoint on the device.
6. GameBuilders write the reflection or take a Power-Up.

## What To Watch In Any Lesson

GameBuilders should complete missions by changing small pieces, not by importing a finished sketch. Ask for the exact line that creates the checkpoint behavior.

Useful questions:

- What did you predict before upload?
- Which variable changed?
- Which function owns that behavior?
- What is the smallest test you can run next?

## Intervention Ladder

1. Ask for the expected behavior.
2. Ask for the exact line responsible.
3. Offer the snippet card from the lesson README.
4. Reveal only the next expression or condition, not the whole sketch.

## Solution Strategy

The public repo should not contain full solutions for every lesson. Learners need enough support to continue independently, but not a nearby answer key that turns the course into copy/paste.

- Keep public files as starters, snippet cards, and checkpoints.
- Keep complete solutions in a private branch, private repo, or local ZIP when needed.
- Release a reference sketch only after the underlying mechanics have been built.
- When helping, reveal the smallest next expression, condition, or variable name.

GameBuilders may use:

- lesson README snippet cards
- debug puzzles in the lesson README
- official references during Code Archaeology

GameBuilders should not paste:

- whole finished sketches
- someone else's finished project
- the Falling Stars reference before the reference lock opens

## Anti-Copying Norm

A gameBuilder can use a snippet only after they can name the variable or command it changes. A working screen matters, but the explanation is the checkpoint.

## Self-Debugging

Before asking for help, gameBuilders answer:

- What did you expect?
- What happened instead?
- Which line should create that behavior?
- What is the smallest thing you can test next?

## Common Early Errors

- Missing semicolons
- drawing outside `if (gb.update())`
- using the wrong button method for the job
- x/y values outside the visible screen

## Differentiation

Core Quests are required. Challenge Quests, Power-Ups, Boss Fights, debugging stretch quests, Code Archaeology, Git, and multiplayer extend the work without raising the floor.

Use the Challenge Quest when a gameBuilder can explain the checkpoint without reading their code line by line.

## Pacing

Mission 00 may take one focused session. Missions 01-05 fit short build cycles. Missions 06-11 need more build and test time. Mission 13 is best as a multi-session project.

## Hardware Prep

Track device label, cable, battery status, upload test date, and known quirks.
