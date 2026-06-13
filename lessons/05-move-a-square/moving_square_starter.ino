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
    // CORE QUEST 1: LEFT and RIGHT already work. Test them first.
    if (gb.buttons.repeat(BTN_LEFT, 1)) {
      playerX = playerX - 1;
    }
    if (gb.buttons.repeat(BTN_RIGHT, 1)) {
      playerX = playerX + 1;
    }

    // CORE QUEST 2: Add UP movement. Which variable should change?


    // CORE QUEST 3: Add DOWN movement.


    // CORE QUEST 4: Keep the square inside the left and right edges.
    if (playerX < 0) {
      playerX = 0;
    }
    if (playerX + playerW > LCDWIDTH) {
      playerX = LCDWIDTH - playerW;
    }

    // CORE QUEST 5: Add matching bounds for top and bottom.


    gb.display.fillRect(playerX, playerY, playerW, playerH);
  }
}
