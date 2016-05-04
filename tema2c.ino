#include <avr/pgmspace.h>

const byte curva[] PROGMEM = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

void setup() {
  Serial.begin(9600);
}

void loop() {
  byte i;
  for (i=0; i<11; i++){
    Serial.print(pgm_read_byte(&curva[i]));
    Serial.print(" ");
  }
  Serial.println();
  delay(1000);
}
