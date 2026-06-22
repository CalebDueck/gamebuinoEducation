#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen(F("Grid"));
}

void loop() {
  if (gb.update()) {
    // CORE QUEST 1: draw a border around the whole 84x48 screen.
    gb.display.drawRect(0, 0, LCDWIDTH, LCDHEIGHT);

    // CORE QUEST 2: draw one filled rectangle near the upper-left corner.

    // CORE QUEST 3: draw one circle near the upper-right corner.

    // CORE QUEST 4: add two more shapes in different corners.
    // Try more options if you want: drawLine(x1, y1, x2, y2), fillCircle(x, y, r), drawPixel(x, y).
  }
}
