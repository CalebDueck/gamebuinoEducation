#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;
const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_GAME_OVER = 2;
byte gameState = STATE_TITLE;
int playerX = 38, playerY = 40;
byte playerW = 10, playerH = 5;
int starX = 20, starY = 0;
byte starW = 4, starH = 4;
byte starSpeed = 1;
int score = 0;
byte lives = 3;
void setup() { gb.begin(); gb.pickRandomSeed(); gb.titleScreen(F("Falling Stars")); }
void resetStar() { starX = random(0, LCDWIDTH - starW); starY = 0; }
void resetGame() { score = 0; lives = 3; playerX = 38; starSpeed = 1; resetStar(); }
void updateTitle() {
  gb.display.println(F("Falling Stars"));
  gb.display.println(F("Catch stars"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) { resetGame(); gameState = STATE_PLAYING; }
}
void updatePlayer() {
  byte speed = gb.buttons.held(BTN_B, 1) ? 2 : 1;
  if (gb.buttons.repeat(BTN_LEFT, 1)) { playerX -= speed; }
  if (gb.buttons.repeat(BTN_RIGHT, 1)) { playerX += speed; }
  if (playerX < 0) { playerX = 0; }
  if (playerX + playerW > LCDWIDTH) { playerX = LCDWIDTH - playerW; }
}
void updateStar() {
  starY += starSpeed;
  if (gb.collideRectRect(playerX, playerY, playerW, playerH, starX, starY, starW, starH)) {
    score++;
    if (score % 5 == 0 && starSpeed < 4) { starSpeed++; }
    gb.sound.playOK();
    resetStar();
  } else if (starY > LCDHEIGHT) {
    if (lives > 0) { lives--; }
    gb.sound.playCancel();
    resetStar();
    if (lives == 0) { gameState = STATE_GAME_OVER; }
  }
}
void drawPlayer() { gb.display.fillRect(playerX, playerY, playerW, playerH); }
void drawStar() {
  gb.display.drawPixel(starX + 1, starY);
  gb.display.drawPixel(starX, starY + 1);
  gb.display.drawPixel(starX + 1, starY + 1);
  gb.display.drawPixel(starX + 2, starY + 1);
  gb.display.drawPixel(starX + 1, starY + 2);
}
void drawHud() { gb.display.print(F("S:")); gb.display.print(score); gb.display.print(F(" L:")); gb.display.println(lives); }
void updatePlaying() { updatePlayer(); updateStar(); drawPlayer(); drawStar(); drawHud(); }
void updateGameOver() {
  gb.display.println(F("Game Over"));
  gb.display.print(F("Score: ")); gb.display.println(score);
  gb.display.println(F("Press A"));
  if (gb.buttons.pressed(BTN_A)) { resetGame(); gameState = STATE_PLAYING; }
}
void loop() {
  if (gb.update()) {
    if (gameState == STATE_TITLE) { updateTitle(); }
    else if (gameState == STATE_PLAYING) { updatePlaying(); }
    else { updateGameOver(); }
  }
}
