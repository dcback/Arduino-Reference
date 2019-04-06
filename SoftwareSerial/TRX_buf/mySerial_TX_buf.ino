/*********************************************************
    mySerial.write(buf, sizeof(buf))     write -> serial
    mySerial.readBytes(buf, sizeof(buf)) serial -> read
**********************************************************/
#include "SoftwareSerial.h"

#define GPIO_SERIAL_RX    A2
#define GPIO_SERIAL_TX    A3
SoftwareSerial mySerial(GPIO_SERIAL_RX, GPIO_SERIAL_TX);

void setup() {
    Serial.begin(9600);
    mySerial.begin(9600);
}

void loop() {
    char buf[] = "ABCD:";

    mySerial.write(buf, sizeof(buf));   // sizeof(buf) == 6

    Serial.println(sizeof(buf));
    Serial.println(buf);
    Serial.println(buf[0]);
    Serial.println(buf[1]);
    Serial.println(buf[2]);
    Serial.println(buf[3]);
    Serial.println(buf[4]);
    Serial.println(buf[5]); // '\n\

    delay(1000);
}
