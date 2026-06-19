#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_WIN = 2;

byte gameState = STATE_TITLE;

int playerX = 5;
int playerY = 20;
byte playerSize = 6;

int keyX = 30;
int keyY = 12;
int doorX = 70;
int doorY = 18;
byte keyCollected = 0;

void resetGame() {
  playerX = 5;
  playerY = 20;
  keyCollected = 0;
}

void updateTitle() {
  gb.display.println(F("Door Key"));
  gb.display.println(F("Find key"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  if (gb.buttons.repeat(BTN_LEFT, 1)) { playerX--; }
  if (gb.buttons.repeat(BTN_RIGHT, 1)) { playerX++; }
  if (gb.buttons.repeat(BTN_UP, 1)) { playerY--; }
  if (gb.buttons.repeat(BTN_DOWN, 1)) { playerY++; }

  if (playerX < 0) { playerX = 0; }
  if (playerY < 8) { playerY = 8; }
  if (playerX + playerSize > LCDWIDTH) { playerX = LCDWIDTH - playerSize; }
  if (playerY + playerSize > LCDHEIGHT) { playerY = LCDHEIGHT - playerSize; }
}

void updateGoal() {
  if (!keyCollected && gb.collideRectRect(playerX, playerY, playerSize, playerSize, keyX, keyY, 4, 4)) {
    keyCollected = 1;
    gb.sound.playOK();
  }
  if (keyCollected && gb.collideRectRect(playerX, playerY, playerSize, playerSize, doorX, doorY, 8, 12)) {
    gameState = STATE_WIN;
  }
}

void drawHud() {
  gb.display.print(F("Key:"));
  if (keyCollected) {
    gb.display.println(F("yes"));
  } else {
    gb.display.println(F("no"));
  }
}

void drawGoalObjects() {
  if (!keyCollected) {
    gb.display.drawRect(keyX, keyY, 4, 4);
  }
  gb.display.drawRect(doorX, doorY, 8, 12);
  if (keyCollected) {
    gb.display.drawLine(doorX + 1, doorY + 1, doorX + 6, doorY + 10);
  }
}

void updatePlaying() {
  updatePlayer();
  updateGoal();
  drawHud();
  gb.display.fillRect(playerX, playerY, playerSize, playerSize);
  drawGoalObjects();
}

void updateWin() {
  gb.display.println(F("Door Open"));
  gb.display.println(F("You escaped"));
  gb.display.println(F("A: again"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void setup() {
  gb.begin();
  gb.titleScreen(F("Door Key"));
}

void loop() {
  if (gb.update()) {
    if (gameState == STATE_TITLE) {
      updateTitle();
    } else if (gameState == STATE_PLAYING) {
      updatePlaying();
    } else {
      updateWin();
    }
  }
}
