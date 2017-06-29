
int sensorPin = A1;    // select the input pin for the potentiometer

int greenPin = 10;      // ambos pines tienen la opcion de PWM
int redPin = 11;

int sensorValue = 0;  // variable to store the value coming from the sensor
int green = 0;
int red = 0;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(sensorPin, INPUT);  

  Serial.begin(9600);
  
}


void loop() {
  delay(100);                            // Wait 100 milliseconds
  sensorValue = analogRead(sensorPin);
  Serial.write(sensorValue);
  
  
  
  green = constrain(map(sensorValue, 0, 503, 255, 0) , 0, 255);
  red = constrain( map(sensorValue, 503, 1023, 0, 255), 0, 255);

  analogWrite(greenPin, green);
  analogWrite(redPin, red);

}
