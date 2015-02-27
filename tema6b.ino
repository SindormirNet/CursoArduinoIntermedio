#include <EEPROM.h>

#define POS_INI 0

char cadena[]="sindormir.net";

void setup(){
  Serial.begin(9600);
  Serial.print("Escribiendo en EEPROM: ");
  Serial.println(cadena);
  
  for (int i = POS_INI; i < sizeof cadena; i++)
    EEPROM.write(i, cadena[i]);
  
  delay(100);
}

void loop() {
  char lectura[20];
  
  Serial.print("Leyendo de EEPROM: ");
  for (int i = POS_INI; i < sizeof cadena; i++)
    lectura[i]=EEPROM.read(i);
    
  Serial.println(lectura);
  
  while(1);
}
