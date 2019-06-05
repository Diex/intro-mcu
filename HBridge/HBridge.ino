const int switchPin = A0;    // switch input
const int motor1Pin = 3;    // H-bridge leg 1 (pin 2, 1A)
const int motor2Pin = 4;    // H-bridge leg 2 (pin 7, 2A)
const int enablePin = 9;    // H-bridge enable pin

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int joystick = analogRead(A2);
  boolean dir = joystick < 512 ? true : false;
  Serial.println(joystick);
  int power = map(abs(joystick - 512), 0, 512, 0, 255);
  analogWrite(enablePin, power);

  if (dir) {
    digitalWrite(motor1Pin, LOW);
    digitalWrite(motor2Pin, HIGH);
  }
  else {
    digitalWrite(motor1Pin, HIGH);
    digitalWrite(motor2Pin, LOW);
  }
}
