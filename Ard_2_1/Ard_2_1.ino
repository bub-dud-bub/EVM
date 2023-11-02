#include <Servo.h>
Servo servo;
void setup() {
  servo.attach(D0)

}

void loop() {
  //if (!DigitalRead(A0)){ (360)
    //servo.write(0);
  //}
  servo.write(!DigitalWrite(A0))
}
