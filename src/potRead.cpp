//
// -* Encoding utf-8 *-
// Created by Samuel Hong on 2022/5/11.
// Description:
//

#include "Arduino.h"

const int analogInPin = A0;
const int analogOutPin = 9;

//potentiometer value in:0-1023
int potentiometerValue = 0;
int pmwValue = 0;


void potRead() {
    potentiometerValue = analogRead(analogInPin);
    pmwValue = map(potentiometerValue, 0, 1023, 0, 255);
    analogWrite(analogOutPin,HIGH);
    Serial.print("sensor =");
    Serial.print(potentiometerValue, '\t');
    Serial.print("pmwValue = ");
    Serial.print(pmwValue,'\t');
}