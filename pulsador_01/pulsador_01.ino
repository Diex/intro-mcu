
void setup() {
  pinMode(7, INPUT_PULLUP); // configuro el pin 7 como entrada
}

void loop() {
  int resultado = digitalRead(7);
  digitalWrite(13, resultado);  
}
