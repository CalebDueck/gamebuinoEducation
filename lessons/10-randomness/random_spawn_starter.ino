#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

int playerX = 40;
int playerY = 36;
int starX = 20;
int starY = 12;
int score = 0;

void resetStar() {
  // CORE QUEST 1: replace this fixed x with random x in a safe screen range.
  // Test result: after collection, the star should not always come back to the same x position.
  starX = 20;

  // CORE QUEST 2: replace this fixed y with random y in a safe screen range.
  // Test result: after collection, the star should stay on screen instead of spawning partly off the edge.
  starY = 12;
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
    // Before resetStar() is finished, the star may return to the same place every time.
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
