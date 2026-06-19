#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_SHOW = 1;
const byte STATE_INPUT = 2;
const byte STATE_WIN = 3;
const byte STATE_GAME_OVER = 4;

byte gameState = STATE_TITLE;

const byte patternLength = 3;
byte pattern[patternLength] = {BTN_A, BTN_B, BTN_A};
byte showIndex = 0;
byte inputIndex = 0;
int showTimer = 20;

void resetRound() {
  showIndex = 0;
  inputIndex = 0;
  showTimer = 20;
}

void updateTitle() {
  gb.display.println(F("Rhythm"));
  gb.display.println(F("Watch then copy"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetRound();
    gameState = STATE_SHOW;
  }
}

void drawButtonName(byte buttonValue) {
  if (buttonValue == BTN_A) {
    gb.display.println(F("A"));
  } else if (buttonValue == BTN_B) {
    gb.display.println(F("B"));
  } else {
    gb.display.println(F("C"));
  }
}

void updateShow() {
  gb.display.print(F("Step "));
  gb.display.println(showIndex + 1);
  drawButtonName(pattern[showIndex]);
  showTimer--;
  if (showTimer <= 0) {
    showIndex++;
    showTimer = 20;
    if (showIndex >= patternLength) {
      gameState = STATE_INPUT;
    }
  }
}

void updateInput() {
  byte pressed = 0;
  gb.display.print(F("Repeat "));
  gb.display.println(inputIndex + 1);
  if (gb.buttons.pressed(BTN_A)) { pressed = BTN_A; }
  if (gb.buttons.pressed(BTN_B)) { pressed = BTN_B; }
  if (gb.buttons.pressed(BTN_C)) { pressed = BTN_C; }
  if (pressed != 0) {
    if (pressed == pattern[inputIndex]) {
      inputIndex++;
      gb.sound.playOK();
      if (inputIndex >= patternLength) {
        gameState = STATE_WIN;
      }
    } else {
      gb.sound.playCancel();
      gameState = STATE_GAME_OVER;
    }
  }
}

void updateWin() {
  gb.display.println(F("Pattern Clear"));
  gb.display.println(F("A: again"));
  if (gb.buttons.pressed(BTN_A)) {
    resetRound();
    gameState = STATE_SHOW;
  }
}

void updateGameOver() {
  gb.display.println(F("Wrong Button"));
  gb.display.println(F("A: retry"));
  if (gb.buttons.pressed(BTN_A)) {
    resetRound();
    gameState = STATE_SHOW;
  }
}

void setup() {
  gb.begin();
  gb.titleScreen(F("Rhythm"));
}

void loop() {
  if (gb.update()) {
    if (gameState == STATE_TITLE) {
      updateTitle();
    } else if (gameState == STATE_SHOW) {
      updateShow();
    } else if (gameState == STATE_INPUT) {
      updateInput();
    } else if (gameState == STATE_WIN) {
      updateWin();
    } else {
      updateGameOver();
    }
  }
}
