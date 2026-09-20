// Definimos el pin donde hemos conectado la maneta
const int pinFreno = 2;

void setup() {
  // Iniciamos el monitor serie para ver los resultados en la pantalla del ordenador
  Serial.begin(9600);
  
  // Configuramos el pin del freno con la resistencia Pull-up interna
  pinMode(pinFreno, INPUT_PULLUP);
}

void loop() {
  // Leemos el estado del interruptor
  int estadoFreno = digitalRead(pinFreno);

  // Si el estado es LOW, significa que el circuito está cerrado (conectado a GND)
  if (estadoFreno == LOW) {
    Serial.println("¡Freno accionado!");
  } else {
    Serial.println("Freno suelto...");
  }

  // Una pequeña pausa para estabilizar la lectura y no saturar el monitor serie
  delay(100);
}