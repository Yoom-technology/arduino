#include <Servo.h>

Servo Servo1;

int servoPin = 4;
int potPin = A4 ;


void setup() {
    Servo1.attach(9);
}


void loop() {
    int reading = analogRead(potPin);
    int angle = map(reading, 0, 1023, 0, 180);
    Servo1.write(angle);
}