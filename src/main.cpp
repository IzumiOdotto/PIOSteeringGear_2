#include <Arduino.h>
#include <Servo.h>

Servo servo;

void setup() {
// write your initialization code here
    servo.attach(9);
    servo.write(0);
    delay(2000);
}

void loop() {
// write your code here

    servo.write(90);
    delay(1000);
    servo.write(0);
    delay(1000);


}