#include "simpleLED.h"  // Local library call 

simpleLED cTRL;         // for function parameter in loop..

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if ( cTRL.Switch(2) ) {         // Switch(int digitalPin) for Ctrl
        cTRL.LED(13, 10, 100);      // cTRL.LED( byte pin, int times, int onTime)
    }
    Serial.println(cTRL.Switch(2));
}
