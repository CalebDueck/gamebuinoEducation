#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen(F("Hello"));
}

void loop() {
  if (gb.update()) {
    // CORE QUEST 1: print your game title.
    gb.display.println(F("Falling Stars"));

    // CORE QUEST 2: print your name or team name.
    gb.display.println(F("By: ______"));

    // CORE QUEST 3: add a prompt that fits the screen.
    gb.display.println();
    gb.display.println(F("Press A"));

    // POWER-UP: use gb.frameCount to make something blink.
  }
}
