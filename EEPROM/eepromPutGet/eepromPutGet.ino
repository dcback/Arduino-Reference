/***************************************************
    [EEPROM Put]
        EEPROM.put(address, data)
    [EEPROM Get]
        EEPROM.get(address, data)
            data(char, int, byte, float, str..)
****************************************************/
#include <EEPROM.h>

struct Macro {
    char  cha;      // 'A'
    int   inum;     // -32,768 to 32,767
    byte  bnum;     // 0 ~ 255
    float fnum;     // 3.14
    char  str[10];  // string
};

byte eeAddress = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {

    Macro putData = {
        'A',
        32767,
        255,
        3.14,
        "DC BACK"
    };

    EEPROM.put(eeAddress, putData);     // Write data

    Macro getData;
    EEPROM.get(eeAddress, getData);     // Read data

    Serial.println(getData.cha);
    Serial.println(getData.inum);
    Serial.println(getData.bnum);
    Serial.println(getData.fnum);
    Serial.println(getData.str);

    delay(1000);
}
