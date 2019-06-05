void setup() {
  pinMode(9, OUTPUT);
  pinMode(5, INPUT);
}

void loop() {

  int estado = digitalRead(5);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9, LOW);
  delay(1);
  return;
  
  if (estado == 0) {
    digitalWrite(9, HIGH);
    delay(1000);
  }

  digitalWrite(9, LOW);

}


