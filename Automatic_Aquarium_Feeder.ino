#include <Servo.h>

Servo servo;

int servoPin = 9;

//FOR CONTINUOUS SERVO

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);

  servo.write(0); //turn on for 0.75 seconds
  delay(750);

}

void loop() {
  servo.detach();
  delay(86400000); //wait for next day
  
  servo.attach(servoPin);
  // rotate counter-clockwise full-speed
  servo.write(0);
  delay(750); //turn for 0.75 seconds


}
