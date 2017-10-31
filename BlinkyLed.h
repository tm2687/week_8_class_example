#include "Arduino.h"

class BlinkyLed
{
  public:
    BlinkyLed(int _pin, int _blinkHIGHLength, int _blinkLOWLength);
    void updateLed();
    
    byte pin;
    int blinkHIGHLength;
    int blinkLOWLength;
    bool blinkState;
    unsigned long lastBlink;

    private:
};
