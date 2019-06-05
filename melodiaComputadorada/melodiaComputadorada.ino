void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:


  int sensor = analogRead(A0);
  int pitch = map(sensor, 0, 1024, 440, 880);
  tone(9, pitch);
  analogWrite(6, random(0, 255));
  delay(100);
}
