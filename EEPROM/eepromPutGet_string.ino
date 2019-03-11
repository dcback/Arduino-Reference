/***************************************************
    [EEPROM Put]
        EEPROM.put(address, data)
    [EEPROM Get]
        EEPROM.get(address, data)
            data(char, int, byte, float, str..)
****************************************************/
#include <EEPROM.h>

char fileName[30] = "[BME280_4JIG]";  // string

byte eeAddress = 0;

void setup() {
    Serial.begin(9600);
    
    EEPROM.put(eeAddress, fileName);   // Write data
    EEPROM.get(eeAddress, fileName);   // Read data

    Serial.println(fileName);
}

void loop() {
}
