#include <Arduino.h>

#define LED 11
#define POTENTIOMETER A0

void setup() {

    Serial.begin(9600);

    pinMode(LED, OUTPUT);
    pinMode(POTENTIOMETER, INPUT);

}

void loop() {

    int potency = analogRead(POTENTIOMETER);
    int pwm = map(potency, 0, 1023, 0, 255);

    analogWrite(LED, pwm);

}