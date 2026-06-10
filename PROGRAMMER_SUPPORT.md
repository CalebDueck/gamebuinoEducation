# Programmer Support

Use this guide when you get stuck.

## First Rule

Do not try five new fixes at once. Make one small change, test it, and notice what changed.

That is how programmers get unstuck: predict, test, observe, repeat.

## Basic Troubleshooting For First-Time Programmers

### 1. Read the task again

Before changing code, make sure you can answer:

- What should happen on the screen?
- Which button should do something?
- What is the smallest visible change I am trying to make?

If you cannot answer those questions yet, do not keep typing. Re-read the current lesson and starter file first.

### 2. Change one thing at a time

Good:

- change one number
- change one message
- add one line from a snippet card

Risky:

- rewrite a whole section
- paste a large answer
- change several variables before testing

### 3. Look for the first error, not every error

When the editor shows many red messages, start with the first one.

Very often one missing symbol causes many later errors.

Common causes:

- missing `;`
- missing `}`
- misspelled variable or function name
- typing code outside the right function

### 4. Compare carefully

If something should say `playerX`, then `playerx` is different.

Check:

- capitals and lowercase letters
- parentheses `()`
- braces `{}`
- commas
- semicolons `;`

Programming is picky. Tiny differences matter.

### 5. Ask: "What line should cause the behavior?"

If the sprite does not move, which exact line is supposed to change its position?

If the message does not appear, which exact line is supposed to draw it?

If you cannot point to that line yet, your next step is not "guess more code." Your next step is finding the line that should control the behavior.

### 6. Use visible tests

When you are unsure whether code is running:

- change a message on screen
- draw a simple shape
- change a number to something obvious
- temporarily move an object to a very different position

Big visible tests are better than tiny invisible guesses.

### 7. Separate compile problems from game logic problems

There are two different kinds of stuck:

- The code does not compile.
- The code compiles, but the game does the wrong thing.

If it does not compile, focus on syntax first.

If it compiles but behaves strangely, focus on variables, conditions, and where values change.

### 8. If upload works but the device looks wrong

Check:

- battery and cable
- correct board and port
- whether drawing happens inside `if (gb.update())`
- whether your text or sprite coordinates are on screen

### 9. Explain before asking for the answer

When you ask for help, include:

- what you expected
- what happened instead
- the error message, if there is one
- the smallest relevant code snippet
- what you already tried

That makes the help better and faster.

## General Strategy When You Feel Lost

1. Stop typing for one minute.
2. Read the current TODO or checkpoint.
3. Find the smallest line related to that goal.
4. Make one tiny test change.
5. Compile or upload again.
6. Keep notes on what changed.

If you still feel lost, ask for a hint, not a full solution.

## LLM (ChatGPT, Gemini, Claude) Help Prompt

Use the prompt below with any LLM when you need help with a specific problem.

Copy and paste the prompt as the first message in the chat window.

```text
You are my programming coach for a Gamebuino Classic intro to coding course using Arduino C++.

Your job is to help me think, test, and debug without giving away the answer too early.

Rules:
1. Do not give the full solution immediately.
2. Start by asking 1-3 short diagnostic questions if needed.
3. If I paste code or an error, first explain what kind of problem it seems to be in simple language.
4. Give the smallest useful next hint first.
5. Prefer hints like:
   - what line or section to inspect
   - what variable to track
   - what value to print or test
   - what symbol or spelling to compare
   - what tiny change to try next
6. Do not rewrite my whole program unless I explicitly ask and I am still stuck after multiple hint rounds.
7. If I ask for the answer directly, still begin with a hint-first approach unless I clearly say: "I am totally stuck, show me the solution."
8. When giving hints, reveal them gradually:
   - Hint 1: direction only
   - Hint 2: name the exact function, variable, or line pattern to inspect
   - Hint 3: show a partial fix or pseudocode
   - Final help: show the solution and explain why it works
9. Keep explanations beginner-friendly. Avoid jargon when possible.
10. If my code is close, point out only the smallest correction needed.
11. If there are multiple mistakes, help me fix the first important one before discussing the rest.
12. Encourage debugging habits: predict, test, observe, and change one thing at a time.

When I send a message, use this response pattern:
- What I notice
- Smallest next step
- Why that step matters
- Optional hint level (only if I ask for more help)

If I paste an error message, translate it into plain English first.
If I paste code, do not replace everything unless necessary.
If I seem frustrated or confused, keep the task small and concrete.
```
