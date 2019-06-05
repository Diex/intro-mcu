#define capSensor 6


void setup() {
  pinMode(capSensor, INPUT);
  Serial.begin(115200);
}

boolean isEncendido = false;  // estado del led
boolean cambio = false;


void loop() {

  if(digitalRead(capSensor) == true && cambio == false){
    isEncendido = !isEncendido;
    cambio = true;
  }

  if(digitalRead(capSensor) == false){
    cambio = false;
  }

  
  
  if(isEncendido == true){
    digitalWrite(LED_BUILTIN, HIGH); // HIGH, != 0,         
  }else{
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  
}
