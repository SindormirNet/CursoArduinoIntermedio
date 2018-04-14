void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  Serial.println("Introduce números del 0 al 9");
}

void loop() {
  char dato;
  byte brillo;

  if (Serial.available() >0 ){
    dato=Serial.read();
    brillo= map (dato, '0', '9', 0, 255);
    analogWrite(9, brillo);
    Serial.print("Cambiando brillo a ");
    Serial.println(brillo);
  }
}
