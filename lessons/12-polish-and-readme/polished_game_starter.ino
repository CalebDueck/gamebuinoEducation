#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_GAME_OVER = 2;

byte gameState = STATE_TITLE;

int playerX = 38;
int playerY = 40;
byte playerW = 8;
byte playerH = 6;

int starX = 20;
int starY = 0;
byte starW = 4;
byte starH = 4;
byte starSpeed = 1;

int score = 0;
byte lives = 3;

void setup() {
  gb.begin();
  gb.pickRandomSeed();
  gb.titleScreen(F("Polish"));
}

void resetGame() {
  score = 0;
  lives = 3;
  playerX = 38;
  resetStar();
}

void resetStar() {
  // CORE QUEST 1: choose a random x position and reset starY to 0.
  starX = random(0, LCDWIDTH - starW);
  starY = 0;
}

void updateTitle() {
  // CORE QUEST 2: rename the game and add one clear instruction.
  gb.display.println(F("Polish Stars"));
  gb.display.println(F("Press A"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  // CORE QUEST 3: move left and right, then add bounds.
}

void updateStar() {
  // CORE QUEST 4: make the star fall, catch it, and miss it.
}

void drawPlayer() {
  gb.display.fillRect(playerX, playerY, playerW, playerH);
}

void drawStar() {
  gb.display.fillRect(starX, starY, starW, starH);
}

void drawHud() {
  gb.display.print(F("S:"));
  gb.display.print(score);
  gb.display.print(F(" L:"));
  gb.display.println(lives);
}

void updatePlaying() {
  updatePlayer();
  updateStar();
  drawPlayer();
  drawStar();
  drawHud();
}

void updateGameOver() {
  gb.display.println(F("Game Over"));
  gb.display.print(F("Score: "));
  gb.display.println(score);
  gb.display.println(F("A: restart"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
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
