#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

int playerX = 40;
int playerY = 36;
int starX = 20;
int starY = 12;
int score = 0;

void resetStar() {
  // CORE QUEST 1: randomize starX in a safe screen range.
  starX = random(0, LCDWIDTH - 4);

  // CORE QUEST 2: randomize starY in a safe screen range.
  starY = random(8, LCDHEIGHT - 12);
}

void setup() {
  gb.begin();
  gb.pickRandomSeed();
  gb.titleScreen(F("Random"));
}

void loop() {
  if (gb.update()) {
    if (gb.buttons.repeat(BTN_LEFT, 1)) {
      playerX--;
    }
    if (gb.buttons.repeat(BTN_RIGHT, 1)) {
      playerX++;
    }

    // CORE QUEST 3: collect the star and reset it.
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
