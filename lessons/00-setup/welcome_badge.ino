#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

void setup() {
  gb.begin();

  // TODO 1: Change the title screen text after your first successful upload.
  gb.titleScreen(F("Welcome"));
}

void loop() {
  if (gb.update()) {
    // TODO 2: Change one short message first.
    gb.display.println(F("Classic Quest"));

    // TODO 3: Try a second small text change after TODO 2 works.
    gb.display.println(F("Ready!"));
    gb.display.println();

    // TODO 4: Press A to test button input and popup feedback.
    if (gb.buttons.pressed(BTN_A)) {
      gb.popup(F("Upload win!"), 25);
    }

    // POWER-UP IDEA: Add a BTN_B action with a different popup.
    gb.display.println(F("Press A"));
  }
}
