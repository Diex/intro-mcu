void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

int sensor = 0;
void loop() {
  delay(1);
  
  sensor = analogRead(A0);

  String withScale = "0 ";
  withScale += sensor;
  withScale += " 1024";

//  "0 blabla 1024"
  Serial.println(withScale);
}











//  int value = analogRead(A0);

