/******************************************
    Adruino : 1~13, A0~A7
    STM32   : PA0~PA15, PB0~PB15, PC0~PC15
    ESP8266 : D0~D8
*******************************************/
#include <TM1637.h>

const int pinClk = D1;
const int pinDta = D2;

TM1637 led;

void setup() {
}

void loop() {
    for (int i = 0; i < 10000; i++)
    {
        led.DigitDisplayWrite(pinClk, pinDta, i);
        delay(10);
    }
}
