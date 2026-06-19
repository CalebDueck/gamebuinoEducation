#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

int score = 0;
byte lives = 3;

void setup() {
  gb.begin();
  gb.titleScreen(F("Score"));
}

void loop() {
  if (gb.update()) {
    // Test result before pressing anything:
    // Score: 0
    // Lives: 3

    // CORE QUEST 1: increase score when A is pressed.
    // Test result: one A press should change only score by +1.
    if (gb.buttons.pressed(BTN_A)) {
      score = score + 1;
    }

    // CORE QUEST 2: make B subtract 1 from score or lives.
    // Test result: one B press should change only the value you chose for B.
    // If A and B do the same thing, check the BTN_... constant in each if statement.


    // CORE QUEST 3: make C reset score to 0.
    // Test result: one C press should reset only the value you chose to reset.


    gb.display.print(F("Score: "));
    gb.display.println(score);
    gb.display.print(F("Lives: "));
    gb.display.println(lives);
  }
}
