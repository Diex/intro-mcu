
//int adin = A0;

#define ADIN A0
#define LED 3

int adValue = 0;
float volts = 0;
int ledValue = 0;

void setup() {
  pinMode(ADIN, INPUT); 
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {

  
  
  adValue = analogRead(ADIN);
  volts = adValue * 5.0 /1024 ;
  ledValue = 255 - adValue/4; 
  
  analogWrite(LED, ledValue);
  
  
  Serial.print(adValue);
  Serial.print(" : ");
  Serial.print(volts, 5);
  Serial.println(" voltios !!!");

//  delay(10);
}
