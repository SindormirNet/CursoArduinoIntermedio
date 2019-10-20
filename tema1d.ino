#include <EEPROM.h>
#define POS_LONG 104
#define POS_SIGUIENTE_DATO 108 // ¡Debemos llevar la cuenta manualmente!

void setup() {
  unsigned long mi_variable = 2.7182;
  Serial.begin(9600);
  Serial.print("Escribiendo en EEPROM: ");
  Serial.println(mi_variable);
  EEPROM.put(POS_LONG, mi_variable);
}

void loop() {
  unsigned long mi_variable_recuperada;

  Serial.print("Leyendo de EEPROM: ");
  EEPROM.get(POS_EEPROM, mi_variable_recuperada);
  Serial.println(mi_variable_recuperada);
  while(1); // Paramos aquí el código

}
