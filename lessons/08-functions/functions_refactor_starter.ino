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
  // Test result: movement bugs usually live here, not in drawPlayer().
}

void drawPlayer() {
  // CORE QUEST 2: draw the player.
  // Test result: if the square is missing, inspect this function first.
}

void drawHud() {
  // CORE QUEST 3: draw score or another useful value.
  // Test result: if the HUD text is missing, inspect this function first.
}

void loop() {
  if (gb.update()) {
    updatePlayer();
    drawPlayer();
    drawHud();
  }
}
