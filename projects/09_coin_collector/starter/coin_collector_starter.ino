#include <SPI.h>
    #include <Gamebuino.h>

    Gamebuino gb;

    int playerX = 40, playerY = 36;
byte playerW = 6, playerH = 6;
int coinX = 20, coinY = 20;
byte coinW = 5, coinH = 5;
int score = 0;
void updatePlayer() {
  if (gb.buttons.repeat(BTN_LEFT, 1)) { playerX--; }
  if (gb.buttons.repeat(BTN_RIGHT, 1)) { playerX++; }
}

    void setup() {
      gb.begin();
      gb.titleScreen(F("Coin"));
    }

    void loop() {
      if (gb.update()) {
        updatePlayer();
            if (gb.collideRectRect(playerX, playerY, playerW, playerH, coinX, coinY, coinW, coinH)) {
              score = score + 1;
              coinX = 10;
              coinY = 10;
              // TODO: move the coin somewhere new.
            }
            gb.display.fillRect(playerX, playerY, playerW, playerH);
            gb.display.drawCircle(coinX + 2, coinY + 2, 2);
            gb.display.print(F("Score: "));
            gb.display.println(score);
      }
    }
