#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

int playerX = 40;
int playerY = 36;
byte playerW = 4;
byte playerH = 4;

void setup() {
  gb.begin();
  gb.titleScreen(F("Move"));
}

void loop() {
  if (gb.update()) {
    // CORE QUEST 1: Add LEFT movement.

    // CORE QUEST 2: Add RIGHT movement.

    // CORE QUEST 3: Add UP movement. Which variable should change?


    // CORE QUEST 4: Add DOWN movement.


    // CORE QUEST 5: Keep the square inside the left and right edges.

    // CORE QUEST 6: Add matching bounds for top and bottom.


    gb.display.fillRect(playerX, playerY, playerW, playerH);
  }
}
