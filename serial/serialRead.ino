/**********************************************************
    Serial.read() : read byte unit of Stream from serial
    end byte -> 10(Return) auto
***********************************************************/
void setup() {
    Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

    if (Serial.available())
        Serial.println(Serial.read());

    delay(1000);
}
