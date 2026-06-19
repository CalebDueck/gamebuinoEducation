#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_WIN = 2;

byte gameState = STATE_TITLE;

int playerX = 4;
int playerY = 12;
byte playerSize = 4;

const int exitX = 74;
const int exitY = 40;

void resetGame() {
  playerX = 4;
  playerY = 12;
}

byte hitsWall(int nextX, int nextY) {
  if (nextX < 0 || nextY < 8 || nextX + playerSize > LCDWIDTH || nextY + playerSize > LCDHEIGHT) {
    return 1;
  }
  if (nextX + playerSize > 20 && nextX < 24 && nextY < 38) {
    return 1;
  }
  if (nextY + playerSize > 24 && nextY < 28 && nextX > 20 && nextX < 64) {
    return 1;
  }
  if (nextX + playerSize > 60 && nextX < 64 && nextY > 24) {
    return 1;
  }
  return 0;
}

void updateTitle() {
  gb.display.println(F("Simple Maze"));
  gb.display.println(F("Reach exit"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  int nextX = playerX;
  int nextY = playerY;
  if (gb.buttons.repeat(BTN_LEFT, 1)) { nextX--; }
  if (gb.buttons.repeat(BTN_RIGHT, 1)) { nextX++; }
  if (gb.buttons.repeat(BTN_UP, 1)) { nextY--; }
  if (gb.buttons.repeat(BTN_DOWN, 1)) { nextY++; }
  if (!hitsWall(nextX, nextY)) {
    playerX = nextX;
    playerY = nextY;
  }
}

void drawMaze() {
  gb.display.drawRect(exitX, exitY, 6, 6);
  gb.display.drawLine(20, 8, 20, 38);
  gb.display.drawLine(24, 8, 24, 38);
  gb.display.drawLine(20, 24, 64, 24);
  gb.display.drawLine(20, 28, 64, 28);
  gb.display.drawLine(60, 24, 60, 48);
  gb.display.drawLine(64, 24, 64, 48);
}

void updatePlaying() {
  updatePlayer();
  drawMaze();
  gb.display.fillRect(playerX, playerY, playerSize, playerSize);
  if (gb.collideRectRect(playerX, playerY, playerSize, playerSize, exitX, exitY, 6, 6)) {
    gameState = STATE_WIN;
  }
}

void updateWin() {
  gb.display.println(F("Maze Clear"));
  gb.display.println(F("A: again"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void setup() {
  gb.begin();
  gb.titleScreen(F("Simple Maze"));
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
