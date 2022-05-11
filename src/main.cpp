#include <Arduino.h>
#include <Servo.h>

Servo servo;

const int analogInPin = A0;
const int analogOutPin = 9;

//potentiometer value in:0-1023
int potentiometerValue = 0;
int pmwValue = 0;


void setup() {
// write your initialization code here
    servo.attach(analogOutPin);
    servo.write(0);

    delay(2000);
}

void loop() {
// write your code here
    potentiometerValue = analogRead(analogInPin);
    pmwValue = map(potentiometerValue, 0, 1023, 0, 180);

//    analogWrite(analogOutPin,pmwValue);
    Serial.print("sensor = ");
    Serial.print(potentiometerValue, '\t');
    Serial.print("pmwValue = ");
    Serial.print(pmwValue,'\t');

    servo.write(pmwValue);
    delay(1000);

}