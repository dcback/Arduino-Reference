/******************************************
    #include "abc_H"                       
    #include <Arduino.h>                   
    functions { ...  }
       (var) abc::funct { }   <- abc_H
*******************************************/
#include "simpleLED.h"
#include <Arduino.h> 

void simpleLED::LED(byte pin, int times, int onTime)     // use same var in abc.h
{
    pinMode(pin, OUTPUT);

    for ( int i = 0; i < times; i++ )
    {
        digitalWrite(pin, HIGH);
        delay(onTime);
        digitalWrite(pin, LOW);
        delay(onTime);
    }
    _pin = pin;         // no types, only _var = var
    _times = times;     // no types, only _var = var
    _onTime = onTime;   // no types, only _var = var
}

boolean simpleLED::Switch(int digitalPin)
{
    pinMode(digitalPin, INPUT_PULLUP);
    return  digitalRead(digitalPin);   
}
