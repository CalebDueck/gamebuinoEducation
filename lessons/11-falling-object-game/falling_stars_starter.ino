#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_GAME_OVER = 2;

byte gameState = STATE_TITLE;

int playerX = 38;
int playerY = 40;
byte playerW = 8;
byte playerH = 6;

int starX = 20;
int starY = 0;
byte starW = 4;
byte starH = 4;
byte starSpeed = 1;

int score = 0;
byte lives = 3;

void setup() {
  gb.begin();
  gb.pickRandomSeed();
  gb.titleScreen(F("Falling"));
}

void resetGame() {
  score = 0;
  lives = 3;
  playerX = 38;
  resetStar();
}

void resetStar() {
  // CORE QUEST 1: choose a random x position and reset starY to 0.
  starX = random(0, LCDWIDTH - starW);
  starY = 0;
}

void updateTitle() {
  // Test result: before pressing A, this title screen should stay visible.
  gb.display.println(F("Falling Stars"));
  gb.display.println(F("Press A"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  // CORE QUEST 2: move left when LEFT is held.
  // Test result: LEFT and RIGHT should move only the player.


  // CORE QUEST 3: move right when RIGHT is held.


  // CORE QUEST 4: keep playerX inside the screen.

}

void updateStar() {
  // CORE QUEST 5: make the star fall by adding starSpeed to starY.
  // Test result: during play, the star should move downward every frame.


  // CORE QUEST 6: if the star reaches the bottom, subtract one life and reset it.
  // Test result: one miss should cost one life and send the star back to the top.


  // CORE QUEST 7: if the player catches the star, add score and reset it.
  // Test result: one catch should add one score and move the star away from the player.


  // CORE QUEST 8: when lives reaches 0, switch to STATE_GAME_OVER.
  // Test result: at 0 lives, the game-over screen should appear.

}

void drawPlayer() {
  gb.display.fillRect(playerX, playerY, playerW, playerH);
}

void drawStar() {
  gb.display.fillRect(starX, starY, starW, starH);
}

void drawHud() {
  gb.display.print(F("S:"));
  gb.display.print(score);
  gb.display.print(F(" L:"));
  gb.display.println(lives);
}

void updatePlaying() {
  updatePlayer();
  updateStar();
  drawPlayer();
  drawStar();
  drawHud();
}

void updateGameOver() {
  gb.display.println(F("Game Over"));
  gb.display.print(F("Score: "));
  gb.display.println(score);
  gb.display.println(F("A: restart"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void loop() {
  if (gb.update()) {
    if (gameState == STATE_TITLE) {
      updateTitle();
    } else if (gameState == STATE_PLAYING) {
      updatePlaying();
    } else {
      updateGameOver();
    }
  }
}
