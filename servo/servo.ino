void setup() {

}

void loop() {

  
  
  int pos = map(analogRead(A2), 0, 1024, 0, 255);
  analogWrite(11, pos);
  
  
  
}
