#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;
int playerX = 40, playerY = 36;
int starX = 20, starY = 12;
int score = 0;
void resetStar() {
  // CORE QUEST: randomize starX and starY.
  starX = random(0, LCDWIDTH - 4);
  starY = random(8, LCDHEIGHT - 12);
}
void setup() {
  gb.begin();
  gb.pickRandomSeed();
  gb.titleScreen(F("Random"));
}
void loop() {
  if (gb.update()) {
    if (gb.buttons.repeat(BTN_LEFT, 1)) { playerX--; }
    if (gb.buttons.repeat(BTN_RIGHT, 1)) { playerX++; }
    if (gb.collideRectRect(playerX, playerY, 6, 6, starX, starY, 4, 4)) {
      score++;
      resetStar();
    }
    gb.display.fillRect(playerX, playerY, 6, 6);
    gb.display.fillRect(starX, starY, 4, 4);
    gb.display.print(F("Score: "));
    gb.display.println(score);
  }
}
