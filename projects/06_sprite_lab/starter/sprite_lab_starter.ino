#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

#include "../../../assets/generated/example_sprites.h"

void setup() {
  gb.begin();
  gb.titleScreen(F("Sprite"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("Sprite Lab"));
        // CORE QUEST: generate assets/generated/example_sprites.h.
        // Then include your generated header and draw your bitmap here.
        gb.display.drawBitmap(38, 24, HERO_EXAMPLE);
  }
}
