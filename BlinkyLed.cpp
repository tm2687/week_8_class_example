#include "Arduino.h"
#include "BlinkyLed.h"

BlinkyLed::BlinkyLed(int _pin, int _blinkHIGHLength, int _blinkLOWLength)
{
  pin = _pin;

  pinMode(pin, OUTPUT);

  blinkHIGHLength = _blinkHIGHLength;
  blinkLOWLength = _blinkLOWLength;
  lastBlink = 0;
  blinkState = LOW;
}

void BlinkyLed::updateLed()
{
  if (millis() >= lastBlink + blinkHIGHLength && blinkState == LOW) {

    Serial.println(lastBlink);

    lastBlink = millis();

    if (blinkState == LOW) {
      blinkState = HIGH;
    } 

    digitalWrite(pin, blinkState);
  }
  if (millis() >= lastBlink + blinkLOWLength && blinkState == HIGH) {

    Serial.println(lastBlink);

    lastBlink = millis();

    if (blinkState == HIGH) {
      blinkState = LOW;
    } 

    digitalWrite(pin, blinkState);
  }


  
}
