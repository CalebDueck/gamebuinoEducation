#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen(F("Buttons"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("Press buttons"));

    // CORE QUEST 1: A and B already work. Test them first.
    if (gb.buttons.pressed(BTN_A)) {
      gb.popup(F("A pressed"), 15);
    }
    if (gb.buttons.pressed(BTN_B)) {
      gb.popup(F("B pressed"), 15);
    }

    // CORE QUEST 2: Add C.


    // CORE QUEST 3: Add UP, DOWN, LEFT, and RIGHT.

  }
}
