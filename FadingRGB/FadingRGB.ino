
class Led {
  public:
    int red;
    int green;
    int blue;

    void rgb(int r, int g, int b) {
      analogWrite(red, r);
      analogWrite(green, g);
      analogWrite(blue, b);
    }
};

Led unLed;

void setup() {

  unLed.red = 9;
  unLed.green = 10;
  unLed.blue = 11;


}

void loop() {
//  fadeInOut(1, 0, 0);
//  fadeInOut(0, 1, 0);
//  fadeInOut(0, 0, 1);
//  fadeInOut(1, 0, 1);
//  fadeInOut(1, 1, 0);
//  fadeInOut(0, 1, 1);
  fadeInOut(1, 1, 1);

}

void fadeInOut(boolean r, boolean g, boolean b) {

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    unLed.rgb(r ? fadeValue /2 : 0 , g ? fadeValue : 0, b ? fadeValue : 0);
    delay(30);
  }

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    unLed.rgb(r ? fadeValue /2 : 0 , g ? fadeValue : 0, b ? fadeValue : 0);
    delay(30);
  }
}


