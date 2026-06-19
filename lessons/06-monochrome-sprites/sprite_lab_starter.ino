#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

// This header is generated into the repo-wide assets folder, not this lesson folder.
// The ../../../ path is relative to lessons/06-monochrome-sprites/.
#include "../../../assets/generated/example_sprites.h"

void setup() {
  gb.begin();
  gb.titleScreen(F("Sprite"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("Sprite Lab"));

    // CORE QUEST 1: validate and convert assets/sprites/hero_example.sprite.txt.
    // CORE QUEST 2: draw the generated bitmap here.
    gb.display.drawBitmap(38, 24, HERO_EXAMPLE);
  }
}
