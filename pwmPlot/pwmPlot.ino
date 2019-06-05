void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  String data = "0 ";
  data +=analogRead(A0);
  data += " 1024";
  Serial.println(data);
}
