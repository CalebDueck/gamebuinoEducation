#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen(F("Hello"));
}

void loop() {
  if (gb.update()) {
    // CORE QUEST 1: print your game title.
    // Example syntax: gb.display.println(F("My Game"));

    // CORE QUEST 2: print your name or team name.

    // CORE QUEST 3: add a blank line and a prompt that fits the screen.

    // POWER-UP: use gb.frameCount to blink only the prompt line.
    // Keep the same line count each frame so later text does not slide upward.
    // Example idea: print "Press A" when the condition is true, otherwise print a blank line.
  }
}
