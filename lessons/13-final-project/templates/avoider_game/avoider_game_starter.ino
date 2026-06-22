#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_GAME_OVER = 2;

byte gameState = STATE_TITLE;

int playerX = 38;
const int playerY = 40;
byte playerW = 8;
byte playerH = 6;

int hazardX = 20;
int hazardY = 0;
byte hazardSize = 4;
byte hazardSpeed = 1;

int score = 0;
byte lives = 3;

void resetHazard() {
  // TODO: choose a new hazard position at the top of the screen.
}

void resetGame() {
  playerX = 38;
  score = 0;
  lives = 3;
  hazardSpeed = 1;
  resetHazard();
}

void updateTitle() {
  gb.display.println(F("Avoider"));
  gb.display.println(F("Dodge blocks"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  // TODO: add player movement and bounds.
}

void updateHazard() {
  // TODO: move the hazard, handle collisions, update score, and trigger game over at 0 lives.
}

void drawHud() {
  gb.display.print(F("S:"));
  gb.display.print(score);
  gb.display.print(F(" L:"));
  gb.display.println(lives);
}

void updatePlaying() {
  updatePlayer();
  updateHazard();
  drawHud();

  // TODO: draw the player and the hazard.
}

void updateGameOver() {
  gb.display.println(F("Game Over"));
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
  gb.titleScreen(F("Avoider"));
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
