#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

const byte STATE_TITLE = 0;
const byte STATE_PLAYING = 1;
const byte STATE_WIN = 2;

byte gameState = STATE_TITLE;

int playerX = 4;
int playerY = 12;
byte playerSize = 4;

const int exitX = 74;
const int exitY = 40;

void resetGame() {
  playerX = 4;
  playerY = 12;
}

byte hitsWall(int nextX, int nextY) {
  // TODO: return 1 when the next position would hit a wall or leave the screen.
  return 0;
}

void updateTitle() {
  gb.display.println(F("Simple Maze"));
  gb.display.println(F("Reach exit"));
  gb.display.println(F("A: start"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void updatePlayer() {
  // TODO: read D-pad input, test the next position with hitsWall(), and move only if safe.
}

void drawMaze() {
  // TODO: draw the exit and the maze walls.
}

void updatePlaying() {
  updatePlayer();
  drawMaze();

  // TODO: draw the player and switch to win when the player reaches the exit.
}

void updateWin() {
  gb.display.println(F("Maze Clear"));
  gb.display.println(F("A: again"));
  if (gb.buttons.pressed(BTN_A)) {
    resetGame();
    gameState = STATE_PLAYING;
  }
}

void setup() {
  gb.begin();
  gb.titleScreen(F("Simple Maze"));
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
