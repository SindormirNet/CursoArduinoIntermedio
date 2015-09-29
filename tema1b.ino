#include <EEPROM.h>
#define POS_INI 0

char cadena[]="sindormir.net";

void setup(){
  Serial.begin(9600);
  Serial.print("Escribiendo en EEPROM: ");
  Serial.println(cadena);
  
  for (int i = POS_INI; i < sizeof cadena; i++)
    EEPROM.write(i, cadena[i]);
}

void loop() {
  char lectura[20];
  int i = 0;
  
  Serial.print("Leyendo de EEPROM: ");
  do {  
	lectura[i] = EEPROM.read(POS_INI + i);  
	i++;
  } while (lectura[i-1] != '\0');
    
  Serial.println(lectura);
  
  while(1);
}
