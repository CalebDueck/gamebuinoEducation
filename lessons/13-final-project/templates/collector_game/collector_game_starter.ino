#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_WIN = 2;

byte gameState = STATE_TITLE;

int playerX = 38;
int playerY = 24;
byte playerSize = 6;

int itemX = 10;
int itemY = 10;
int score = 0;
const int targetScore = 5;

void placeItem() {
  itemX = random(0, LCDWIDTH - playerSize);
  itemY = random(8, LCDHEIGHT - playerSize);
}

void resetGame() {
  playerX = 38;
  playerY = 24;
  score = 0;
  placeItem();
}

void updateTitle() {
  gb.display.println(F("Collector"));
  gb.display.println(F("Grab 5 items"));
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

void updateCollect() {
  if (gb.collideRectRect(playerX, playerY, playerSize, playerSize, itemX, itemY, playerSize, playerSize)) {
    score++;
    gb.sound.playOK();
    placeItem();
    if (score >= targetScore) {
      gameState = STATE_WIN;
    }
  }
}

void drawHud() {
  gb.display.print(F("S:"));
  gb.display.print(score);
  gb.display.print(F("/"));
  gb.display.println(targetScore);
}

void updatePlaying() {
  updatePlayer();
  updateCollect();
  drawHud();
  gb.display.fillRect(playerX, playerY, playerSize, playerSize);
  gb.display.drawRect(itemX, itemY, playerSize, playerSize);
}

void updateWin() {
  gb.display.println(F("You Win"));
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
  gb.titleScreen(F("Collector"));
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
