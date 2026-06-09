#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;



void setup() {
  gb.begin();
  gb.titleScreen(F("Welcome"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("Classic Quest"));
    gb.display.println(F("Ready!"));
    gb.display.println();
    if (gb.buttons.pressed(BTN_A)) {
      gb.popup(F("Upload win!"), 25);
    }
    gb.display.println(F("Press A"));
  }
}
