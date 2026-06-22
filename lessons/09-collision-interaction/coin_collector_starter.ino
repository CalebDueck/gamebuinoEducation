#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

int playerX = 40;
int playerY = 36;
byte playerW = 6;
byte playerH = 6;

int coinX = 20;
int coinY = 20;
byte coinW = 5;
byte coinH = 5;

int score = 0;

void updatePlayer() {
  // CORE QUEST 1: move the player left and right.
}

void setup() {
  gb.begin();
  gb.titleScreen(F("Coin"));
}

void loop() {
  if (gb.update()) {
    updatePlayer();

    // CORE QUEST 2: add score change when the player touches the coin.
    // Test result: score should change only when the player actually touches the coin.

    // CORE QUEST 3: move the coin somewhere new after collection.
    // Test result: after one collection, the coin should no longer overlap the player.

    // CORE QUEST 4: draw player, coin, and score.
    gb.display.fillRect(playerX, playerY, playerW, playerH);
    gb.display.drawCircle(coinX + 2, coinY + 2, 2);
    gb.display.print(F("Score: "));
    gb.display.println(score);
  }
}
