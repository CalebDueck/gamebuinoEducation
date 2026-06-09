#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;
int playerX = 38;
int playerY = 36;
byte score = 0;
void setup() { gb.begin(); gb.titleScreen(F("Functions")); }
void updatePlayer() {
  // CORE QUEST: move the player with LEFT and RIGHT.
}
void drawPlayer() {
  gb.display.fillRect(playerX, playerY, 6, 6);
}
void drawHud() {
  gb.display.print(F("Score: "));
  gb.display.println(score);
}
void loop() {
  if (gb.update()) {
    updatePlayer();
    drawPlayer();
    drawHud();
  }
}
