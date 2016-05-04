#include <EEPROM.h>
#define PULSADOR 2
#define POS_EEPROM 100

void setup() {
  char texto[] = "sindormir.net";

  Serial.begin(9600);
  Serial.print("Escribiendo en EEPROM ");
  Serial.println(texto);

  EEPROM.put(POS_EEPROM, texto);
}

void loop() {
  char lectura[20];

  if (digitalRead(PULSADOR)==HIGH){
    Serial.print("Leyendo de EEPROM: ");
    EEPROM.get(POS_EEPROM, lectura);
    Serial.println(lectura);
  }
}
