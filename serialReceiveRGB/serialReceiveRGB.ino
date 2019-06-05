int Red = 9;
int Green = 11;
int Blue = 10;
int g = 0;
int r = 0;
int b = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}
void loop()
{
  if (Serial.available() == 10)
  {
    r = (Serial.read() - 48) * 100;
    r = r + (Serial.read() - 48) * 10;
    r = r + Serial.read() - 48;
  
    g = (Serial.read() - 48) * 100;
    g = g + (Serial.read() - 48) * 10;
    g = g + Serial.read() - 48;
    
    b = (Serial.read() - 48) * 100 ;
    b = b + (Serial.read() - 48) * 10;
    b = b + Serial.read() - 48;

    
    int d = Serial.read();
 
  }
  analogWrite(Red, 255 - r);
  analogWrite(Green, 255 - g);
  analogWrite(Blue, 255 - b);

}


