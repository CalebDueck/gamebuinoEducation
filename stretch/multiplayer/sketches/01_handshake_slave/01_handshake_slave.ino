#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;



void setup() {
  gb.begin();
  gb.titleScreen(F("I2C"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("I2C stretch"));
gb.display.println(F("Teacher only"));
  }
}
