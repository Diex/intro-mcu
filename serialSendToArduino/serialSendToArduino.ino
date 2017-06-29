void setup() {
  pinMode(3, INPUT_PULLUP);
  Serial.begin(1200);
  Serial.println("OK");

}

void loop() {
  
  if(digitalRead(3)){
    
    Serial.write(49);     //1  
    Serial.write(10);

    // Serial.print("1\n");    

    // Serial.println("1");
    digitalWrite(13, LOW);
  }else{
    Serial.write(50);   //2
    Serial.write(10);
    digitalWrite(13, HIGH);
  }

  //delay(100);
}
