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
        // CORE QUEST: increase score when A is pressed.
            if (gb.buttons.pressed(BTN_A)) {
              score = score + 1;
            }
            // TODO: make B subtract 1 and C reset.
            gb.display.print(F("Score: "));
            gb.display.println(score);
            gb.display.print(F("Lives: "));
            gb.display.println(lives);
      }
    }
