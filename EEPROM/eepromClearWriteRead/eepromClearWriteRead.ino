/***************************************************
    [EEPROM Clear]
        Sets all of the bytes of the EEPROM to 0.
        EEPROM.write(EEPROM.length(), 0);
    [EEPROM Write]
        EEPROM.write(addr, Val); Val(0~255)
    [EEPROM Read]
        Val = EEPROM.read(addr); Val(0~255)
****************************************************/
// https://www.arduino.cc/en/Reference/EEPROM
#include <EEPROM.h>

byte wrVal = 0;     // EEPROM write var
byte rdVal = 0;     // EEPROM read var

void setup() {

    Serial.begin(9600);
    Serial.print(EEPROM.length()); Serial.println(" byte");         // 2kB = 1024(0~1023)
    Serial.print(sizeof(EEPROM.length())); Serial.println(" kB");   // 2kB = 1024(0~1023)

    pinMode(13, OUTPUT);    // initialize the LED pin as an output.

    // EEPROM Clear
    for (int i = 0 ; i < EEPROM.length() ; i++) {
        EEPROM.write(i, 0);
    }
    digitalWrite(13, HIGH); // turn the LED on when we're done
}

void loop() {
    // Each byte of the EEPROM(0 to 1023) can only hold a value from (0 to 255) * 4
    // 1 byte * 1024 = (0 ~ 255 value/1 byte-unit)1byte-Data * 1024 EA
    // EEPROM Write
    for ( int addr = 0; addr < EEPROM.length(); addr++ )
    {
        wrVal = addr / 4;
        EEPROM.write(addr, wrVal);
    }

    // EEPROM Read & Print
    for ( int addr = 0; addr < EEPROM.length(); addr++ )
    {
        rdVal = EEPROM.read(addr);

        Serial.print("addr : ");
        Serial.print(addr);
        Serial.print(" : ");
        Serial.print(rdVal, DEC);
        Serial.println();
    }
    digitalWrite(13, LOW);
}
