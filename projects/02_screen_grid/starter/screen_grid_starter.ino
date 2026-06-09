#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;



void setup() {
  gb.begin();
  gb.titleScreen(F("Grid"));
}

void loop() {
  if (gb.update()) {
    // CORE QUEST: draw a border around the whole 84x48 screen.
        gb.display.drawRect(0, 0, LCDWIDTH, LCDHEIGHT);
        // CORE QUEST: place shapes using x/y coordinates.
        gb.display.fillRect(4, 4, 6, 6);
        gb.display.drawCircle(70, 12, 5);
        // TODO: add two more shapes in different corners.
  }
}
