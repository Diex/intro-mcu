#define input 4


void setup() {
  // put your setup code here, to run once:
  pinMode(input, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  boolean estado = digitalRead(input);

  digitalWrite(LED_BUILTIN, estado);
  

}
