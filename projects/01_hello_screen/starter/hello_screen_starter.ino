#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;



void setup() {
  gb.begin();
  gb.titleScreen(F("Hello"));
}

void loop() {
  if (gb.update()) {
    // CORE QUEST: print your game title.
        gb.display.println(F("Falling Stars"));
        // CORE QUEST: print your name or team name.
        gb.display.println(F("By: ______"));
        gb.display.println();
        gb.display.println(F("Press A"));
        // POWER-UP: use gb.frameCount to make something blink.
  }
}
