# Arduino Fundamentals

Use this guide if you have never programmed before. You do not need to memorize everything before starting. Read enough to recognize the words when they appear in the lessons.

## What A Program Is

A program is a list of instructions the computer follows.

Programming means:

- write an instruction
- run it
- see what happened
- change one small thing
- run it again

## What An Arduino Sketch Is

In Arduino, a program file is often called a `sketch`.

A sketch usually has two important parts:

- `setup()`: runs once at the beginning
- `loop()`: runs over and over while the device is on

Think of it like this:

- `setup()` is for getting ready
- `loop()` is for the part that keeps happening

## Lines, Semicolons, And Braces

Many lines of code end with `;`

That semicolon marks the end of one instruction.

Example:

```cpp
score = score + 1;
```

Curly braces `{}` group code together.

You will often see them after:

- `if`
- `else`
- functions

If one `{` is missing its matching `}`, the program often breaks in confusing ways.

## Variables

A variable is a named place that stores a value.

Examples:

- `score`
- `lives`
- `playerX`

If `score` is `3`, the program remembers that number until you change it.

## Common Data Types

- `int`: whole numbers such as `0`, `4`, `-2`, `100`
- `byte`: small whole numbers, often used when the value will stay small
- `bool`: `true` or `false`
- text in this course often appears inside `F("...")`

## `=` Is Assignment

`=` means "store this value in the variable on the left."

Example:

```cpp
score = 0;
```

This does not ask a question. It sets `score` to `0`.

This line:

```cpp
score = score + 1;
```

means:

1. look up the current value of `score`
2. add `1`
3. store the new value back into `score`

## `==` Means Equality Check

`==` asks whether two values are equal.

Example:

```cpp
if (lives == 0) {
  gameState = STATE_GAME_OVER;
}
```

This means:

"If `lives` is equal to `0`, run the code inside the braces."

Important:

- `=` changes a value
- `==` compares two values

## Other Comparison Operators

- `>` greater than
- `<` less than
- `>=` greater than or equal to
- `<=` less than or equal to
- `!=` not equal to

Example:

```cpp
if (playerY + playerH > LCDHEIGHT) {
  playerY = LCDHEIGHT - playerH;
}
```

This asks whether the bottom of the player has moved past the bottom of the screen.

## `if` And `else`

An `if` statement checks a condition.

If the condition is true, the code inside the braces runs.

Example:

```cpp
if (gb.buttons.pressed(BTN_A)) {
  gb.popup(F("A!"), 15);
}
```

`else` gives another path when the `if` condition is false.

Example:

```cpp
if (score >= 10) {
  gb.display.println(F("Win"));
} else {
  gb.display.println(F("Keep going"));
}
```

That means:

- if the score is high enough, show `Win`
- otherwise, show `Keep going`

## Functions

A function is a named chunk of code that does one job.

Examples:

- `drawPlayer()`
- `updatePlayer()`
- `resetStar()`

Calling a function means telling the program to run that chunk of code.

Example:

```cpp
drawPlayer();
```

`void` means the function does a job but does not send a value back.

## Function Inputs

Some functions need information inside `()`.

Example:

```cpp
random(0, LCDWIDTH - starW);
```

Those values are inputs for the function.

## Coordinates

The screen is a grid.

- `x` means left/right
- `y` means up/down

On this screen:

- smaller `x` is farther left
- bigger `x` is farther right
- smaller `y` is higher up
- bigger `y` is lower down

The top-left corner is usually `(0, 0)`.

## The Game Loop

Game programs repeat constantly.

That is why drawing and input checking usually happen again and again inside `loop()`.

The program is not drawing the screen once. It is redrawing it many times every second.

## `for` Loops

A `for` loop repeats code a set number of times.

Example:

```cpp
for (int i = 0; i < 5; i = i + 1) {
  gb.display.print(F("*"));
}
```

This means:

- start `i` at `0`
- keep going while `i` is less than `5`
- add `1` to `i` each time

The code inside runs 5 times.

This course mostly uses the main game `loop()` first, but `for` loops are useful later when you want to repeat a task several times.

## `%` Modulo

`%` means remainder after division.

Examples:

- `7 % 3` is `1`
- `10 % 2` is `0`

This is useful for repeating patterns.

Example:

```cpp
gb.frameCount % 20
```

That result cycles from `0` to `19`, then starts over.

## Random Numbers

`random(min, max)` picks a number in a range.

Example:

```cpp
starX = random(0, LCDWIDTH - starW);
```

This helps place objects in different spots.

## Common Beginner Errors

- missing `;`
- missing `}`
- using `=` when you meant `==`
- misspelling a variable name
- putting code in the wrong function
- changing too many things before testing

## Best Beginner Habit

Change one small thing at a time.

Then:

1. compile
2. upload
3. observe
4. explain what changed

That habit matters more than memorizing syntax.
