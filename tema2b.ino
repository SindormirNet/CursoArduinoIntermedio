#include <avr/pgmspace.h>

const char texto[] PROGMEM ="Ocupo 200 bytes de RAM y 2024 de Flash";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(texto);
  delay(1000);
}
