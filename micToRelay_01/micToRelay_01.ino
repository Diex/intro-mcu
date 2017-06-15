#define sensor 5
#define rele  3

void setup() {
  pinMode(sensor, INPUT);
  pinMode(rele, OUTPUT);
}


void loop() {
  
  if(! digitalRead(sensor))
  {    
    digitalWrite(rele, LOW);
    delay(500);   
  }

  digitalWrite(rele, HIGH);

}
