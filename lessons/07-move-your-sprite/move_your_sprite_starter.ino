#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

#include "../../../assets/generated/example_sprites.h"
int playerX = 38;
int playerY = 36;
byte playerW = 8;
byte playerH = 8;

void setup() {
  gb.begin();
  gb.titleScreen(F("Hero"));
}

void loop() {
  if (gb.update()) {
    // CORE QUEST 1: move left and right.
    if (gb.buttons.repeat(BTN_LEFT, 1)) {
      playerX--;
    }
    if (gb.buttons.repeat(BTN_RIGHT, 1)) {
      playerX++;
    }

    // CORE QUEST 2: add bounds using playerW and LCDWIDTH.


    // CORE QUEST 3: draw your sprite at the player position.
    gb.display.drawBitmap(playerX, playerY, HERO_EXAMPLE);
  }
}
