void setup() {

  Serial.begin(1200);
  Serial.print("OK, RECIVIENDO DATA...");

}

int val ;
String texto;


void loop() {

  // simple echo...
//  if (Serial.available()) {
//    val = Serial.read();
//    Serial.println(val);
//  }


  // leer un string
//    if(Serial.available()){
//       texto = Serial.readString();
//       Serial.println(texto);
//    }





  // leer un byte y hacer algo...
    if(Serial.available()){
      val = Serial.read();
      if(val == '1') digitalWrite(13, LOW);
      if(val == '2') digitalWrite(13, HIGH);
    }


  //  delay(100);
}
