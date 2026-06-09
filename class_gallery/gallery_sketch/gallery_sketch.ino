#include <SPI.h>
#include <Gamebuino.h>

Gamebuino gb;



void setup() {
  gb.begin();
  gb.titleScreen(F("Gallery"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("Class Gallery"));
gb.display.println(F("Generate sprites"));
gb.display.println(F("with tools."));
  }
}
