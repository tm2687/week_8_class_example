#include "BlinkyLed.h"

BlinkyLed b1(12, 100, 400);
BlinkyLed b2(11, 200, 300);
BlinkyLed b3(10, 300, 200);
BlinkyLed b4(9, 400, 100);
void setup() {
  Serial.begin(9600);
}

void loop() {
  b1.updateLed();
  b2.updateLed();
  b3.updateLed();
  b4.updateLed();
}
