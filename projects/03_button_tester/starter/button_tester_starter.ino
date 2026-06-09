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
        // CORE QUEST: show a message for A and B.
        if (gb.buttons.pressed(BTN_A)) {
          gb.popup(F("A pressed"), 15);
        }
        if (gb.buttons.pressed(BTN_B)) {
          gb.popup(F("B pressed"), 15);
        }
        // TODO: add UP, DOWN, LEFT, RIGHT, and C.
  }
}
