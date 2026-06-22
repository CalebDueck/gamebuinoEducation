#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_WIN = 2;

byte gameState = STATE_TITLE;

int playerX = 5;
int playerY = 20;
byte playerSize = 6;

int keyX = 30;
int keyY = 12;
int doorX = 70;
int doorY = 18;
byte keyCollected = 0;

void resetGame() {
  playerX = 5;
  playerY = 20;
  keyCollected = 0;
}

void updateTitle() {
  gb.display.println(F("Door Key"));
  gb.display.println(F("Find key"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  // TODO: add D-pad movement and screen bounds.
}

void updateGoal() {
  // TODO: detect key collection, then detect reaching the door after the key is collected.
}

void drawHud() {
  gb.display.print(F("Key:"));
  gb.display.println(keyCollected);
}

void drawGoalObjects() {
  // TODO: draw the key and door in a way the player can read.
}

void updatePlaying() {
  updatePlayer();
  updateGoal();
  drawHud();

  // TODO: draw the player and the goal objects.
}

void updateWin() {
  gb.display.println(F("Door Open"));
  gb.display.println(F("You escaped"));
  gb.display.println(F("A: again"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void setup() {
  gb.begin();
  gb.titleScreen(F("Door Key"));
}

void loop() {
  if (gb.update()) {
    if (gameState == STATE_TITLE) {
      updateTitle();
    } else if (gameState == STATE_PLAYING) {
      updatePlaying();
    } else {
      updateWin();
    }
  }
}
