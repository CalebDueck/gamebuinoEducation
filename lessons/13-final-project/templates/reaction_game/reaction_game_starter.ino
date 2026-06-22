#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_GAME_OVER = 2;

byte gameState = STATE_TITLE;

byte targetButton = BTN_A;
byte roundsLeft = 5;
byte score = 0;
int timer = 30;

void chooseRound() {
  // TODO: choose a target button and reset the timer for a new round.
}

void resetGame() {
  roundsLeft = 5;
  score = 0;
  chooseRound();
}

void updateTitle() {
  gb.display.println(F("Reaction"));
  gb.display.println(F("Press fast"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void drawTarget() {
  // TODO: show the current target button on screen.
}

void updateRound() {
  // TODO: read button input, compare it with targetButton, update score, and handle timer loss.
}

void updatePlaying() {
  drawTarget();
  gb.display.print(F("Left: "));
  gb.display.println(roundsLeft);
  gb.display.print(F("Score: "));
  gb.display.println(score);
  gb.display.print(F("Time: "));
  gb.display.println(timer);
  updateRound();
}

void updateGameOver() {
  gb.display.println(F("Round Over"));
  gb.display.print(F("Score: "));
  gb.display.println(score);
  gb.display.println(F("A: again"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void setup() {
  gb.begin();
  gb.pickRandomSeed();
  gb.titleScreen(F("Reaction"));
}

void loop() {
  if (gb.update()) {
    if (gameState == STATE_TITLE) {
      updateTitle();
    } else if (gameState == STATE_PLAYING) {
      updatePlaying();
    } else {
      updateGameOver();
    }
  }
}
