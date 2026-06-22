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
  // TODO: move the item to a new spot after it is collected.
}

void resetGame() {
  playerX = 38;
  playerY = 24;
  score = 0;
  placeItem();
}

void updateTitle() {
  gb.display.println(F("Collector"));
  gb.display.println(F("Build your version"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  // TODO: add D-pad movement and screen bounds.
}

void updateCollect() {
  // TODO: detect collection, increase score, move the item, and switch to win at targetScore.
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

  // TODO: draw the player and the collectible item.
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
