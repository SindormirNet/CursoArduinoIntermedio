#define ECHO 8      // Pin para recibir el pulso de eco
#define TRIGGER 9   // Pin para enviar el pulso de disparo
 
void setup() {
  Serial.begin(9600);
  init_ultrasonidos();
}

void loop() {
  unsigned int tiempo, distancia;
  
  pulso_ultrasonidos();  	 // Enviamos pulso
  tiempo = pulseIn(ECHO,HIGH); // Medimos el tiempo que tarda en volver
  distancia= tiempo/58;        // El sonido tarda 29uS en recorrer un cm.
  
  Serial.print("La distancia es: ");
  Serial.println(distancia);
  delay(60);  // Dejamos tiempo antes de emitir un nuevo pulso
}

void init_ultrasonidos(){
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
}

void pulso_ultrasonidos() {
  digitalWrite(TRIGGER, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(TRIGGER, LOW);
}
