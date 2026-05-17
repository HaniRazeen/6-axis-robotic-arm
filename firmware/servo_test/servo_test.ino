#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  100
#define SERVOMAX  500

void setup() {
  Serial.begin(115200);

  pwm.begin();
  pwm.setPWMFreq(50);

  delay(1000);
}

void loop() {

  // Move servo to 0 degrees
  pwm.setPWM(0, 0, SERVOMIN);
  delay(1000);

  // Move servo to 90 degrees
  pwm.setPWM(0, 0, 300);
  delay(1000);

  // Move servo to 180 degrees
  pwm.setPWM(0, 0, SERVOMAX);
  delay(1000);
}
