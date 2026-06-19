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
  hazardX = random(0, LCDWIDTH - hazardSize);
  hazardY = 0;
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
  if (gb.buttons.repeat(BTN_LEFT, 1)) { playerX--; }
  if (gb.buttons.repeat(BTN_RIGHT, 1)) { playerX++; }
  if (playerX < 0) { playerX = 0; }
  if (playerX + playerW > LCDWIDTH) { playerX = LCDWIDTH - playerW; }
}

void updateHazard() {
  hazardY += hazardSpeed;
  if (gb.collideRectRect(playerX, playerY, playerW, playerH, hazardX, hazardY, hazardSize, hazardSize)) {
    if (lives > 0) { lives--; }
    gb.sound.playCancel();
    resetHazard();
    if (lives == 0) {
      gameState = STATE_GAME_OVER;
    }
  } else if (hazardY > LCDHEIGHT) {
    score++;
    if (score % 5 == 0 && hazardSpeed < 4) { hazardSpeed++; }
    resetHazard();
  }
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
  gb.display.fillRect(playerX, playerY, playerW, playerH);
  gb.display.fillRect(hazardX, hazardY, hazardSize, hazardSize);
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
