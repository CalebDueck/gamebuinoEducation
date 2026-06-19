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
  byte choices[3] = {BTN_A, BTN_B, BTN_C};
  targetButton = choices[random(0, 3)];
  timer = 30;
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
  gb.display.print(F("Press: "));
  if (targetButton == BTN_A) {
    gb.display.println(F("A"));
  } else if (targetButton == BTN_B) {
    gb.display.println(F("B"));
  } else {
    gb.display.println(F("C"));
  }
}

void updateRound() {
  byte pressed = 0;
  if (gb.buttons.pressed(BTN_A)) { pressed = BTN_A; }
  if (gb.buttons.pressed(BTN_B)) { pressed = BTN_B; }
  if (gb.buttons.pressed(BTN_C)) { pressed = BTN_C; }

  if (pressed != 0) {
    if (pressed == targetButton) {
      score++;
      roundsLeft--;
      gb.sound.playOK();
      if (roundsLeft == 0) {
        gameState = STATE_GAME_OVER;
      } else {
        chooseRound();
      }
    } else {
      gb.sound.playCancel();
      gameState = STATE_GAME_OVER;
    }
  } else {
    timer--;
    if (timer <= 0) {
      gameState = STATE_GAME_OVER;
    }
  }
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
