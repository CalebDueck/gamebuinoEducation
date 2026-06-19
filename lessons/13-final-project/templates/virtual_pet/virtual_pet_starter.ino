#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_CARING = 1;
const byte STATE_GAME_OVER = 2;

byte gameState = STATE_TITLE;
int hunger = 5;
int happiness = 5;
int tick = 0;

void resetGame() {
  hunger = 5;
  happiness = 5;
  tick = 0;
}

void updateTitle() {
  gb.display.println(F("Virtual Pet"));
  gb.display.println(F("A feed B play"));
  gb.display.println(F("C: start"));
  if (gb.buttons.pressed(BTN_C)) {
    resetGame();
    gameState = STATE_CARING;
  }
}

void updatePet() {
  tick++;
  if (tick >= 30) {
    tick = 0;
    hunger--;
    happiness--;
  }
  if (gb.buttons.pressed(BTN_A) && hunger < 9) {
    hunger += 2;
  }
  if (gb.buttons.pressed(BTN_B) && happiness < 9) {
    happiness += 2;
  }
  if (hunger <= 0 || happiness <= 0) {
    gameState = STATE_GAME_OVER;
  }
}

void drawPet() {
  gb.display.drawCircle(42, 24, 8);
  gb.display.drawPixel(39, 22);
  gb.display.drawPixel(45, 22);
  if (hunger > 3 && happiness > 3) {
    gb.display.drawLine(39, 28, 45, 28);
  } else {
    gb.display.drawLine(39, 30, 45, 30);
  }
}

void updateCaring() {
  updatePet();
  gb.display.print(F("Hun:"));
  gb.display.println(hunger);
  gb.display.print(F("Joy:"));
  gb.display.println(happiness);
  drawPet();
}

void updateGameOver() {
  gb.display.println(F("Pet Needs You"));
  gb.display.println(F("C: restart"));
  if (gb.buttons.pressed(BTN_C)) {
    resetGame();
    gameState = STATE_CARING;
  }
}

void setup() {
  gb.begin();
  gb.titleScreen(F("Virtual Pet"));
}

void loop() {
  if (gb.update()) {
    if (gameState == STATE_TITLE) {
      updateTitle();
    } else if (gameState == STATE_CARING) {
      updateCaring();
    } else {
      updateGameOver();
    }
  }
}
