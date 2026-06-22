#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen(F("Buttons"));
}

void loop() {
  if (gb.update()) {
    // This line is normal screen text, so it is redrawn every frame.
    gb.display.println(F("Press buttons"));

    // CORE QUEST 1: Add A and B first.
    // Example syntax:
    // if (gb.buttons.pressed(BTN_A)) {
    //   gb.popup(F("A pressed"), 15);
    // }

    // CORE QUEST 2: Add C.


    // CORE QUEST 3: Add UP, DOWN, LEFT, and RIGHT.
    // Scope note: this mission is about input and reactions.
    // If you want a score counter that remembers values, Mission 04 introduces that on purpose.

  }
}
