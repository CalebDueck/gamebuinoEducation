#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb

int playerX = 40;
int playerY = 34;
byte playerSize = 5;

void setup() {
  gb.begin();
  gb.titleScreen(F("Debug"));
}

void loop() {
  if (gb.update()) 
    if (gb.buttons.repeat(BTN_LEFT, 1)) {
      playerX = playerX + 1;
    }

    if (gb.buttons.repeat(BTN_RIGHT, 1)) {
      playerX = playerX - 1;
    }

    if (gb.buttons.pressed(BTN_A)) {
      gb.popup(F("A!"), 15)
    }

    if (playerX < 0) {
      playerX = LCDWIDTH;
    }

    if (playerX + playerSize > LCDWIDTH) {
      playerX = LCDWIDTH;
    }

    gb.display.println(F("Debug Badge"));
    gb.display.fillRect(playerX, playerY, playerSize, playerSize);
  }
}
