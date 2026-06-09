#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

int playerX = 38;
int playerY = 36;
byte score = 0;

void setup() {
  gb.begin();
  gb.titleScreen(F("Functions"));
}

void updatePlayer() {
  // CORE QUEST 1: move the player with LEFT and RIGHT.
}

void drawPlayer() {
  // CORE QUEST 2: draw the player.
  gb.display.fillRect(playerX, playerY, 6, 6);
}

void drawHud() {
  // CORE QUEST 3: draw score or another useful value.
  gb.display.print(F("Score: "));
  gb.display.println(score);
}

void loop() {
  if (gb.update()) {
    updatePlayer();
    drawPlayer();
    drawHud();
  }
}
