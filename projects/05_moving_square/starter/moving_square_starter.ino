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
        if (gb.buttons.repeat(BTN_LEFT, 1)) { playerX = playerX - 1; }
            if (gb.buttons.repeat(BTN_RIGHT, 1)) { playerX = playerX + 1; }
            // TODO: add UP and DOWN movement.
            if (playerX < 0) { playerX = 0; }
            if (playerX + playerW > LCDWIDTH) { playerX = LCDWIDTH - playerW; }
            // TODO: add y bounds.
            gb.display.fillRect(playerX, playerY, playerW, playerH);
      }
    }
