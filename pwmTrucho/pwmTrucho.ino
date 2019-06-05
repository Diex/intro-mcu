int led = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, 127); 

}
