/***************************************************
    Serial.read() -> byte unit reading
    Serial.readBytes(buffer, lenth)
    Serial.readBytesUntil(char, buffer, length)
    println : ln == 10
****************************************************/
void charReadPrint();
void bytesReadPrint();
void bytesUntilReadPrint();

void setup() {
    Serial.begin(9600);
}

void loop() {
    charReadPrint();
    //    bytesReadPrint();
    //    bytesUntilReadPrint();
    delay(500);
}

void charReadPrint() {
    if ( Serial.available() ) {
        char c = Serial.read();
        Serial.println(c);
        Serial.println(c, DEC);
    }
}

void bytesReadPrint() {
    if ( Serial.available() ) {
        char buf[100];
        byte len = Serial.readBytes(buf, 10);
        Serial.print("Length : ");
        Serial.println(len);

        for ( int i = 0; i < len; i++)
            Serial.print(buf[i]);
    }
}

void bytesUntilReadPrint() {
    if ( Serial.available() ) {
        char buf[100];
        byte len = Serial.readBytesUntil('k', buf, 20);

        Serial.print("Length : ");
        Serial.println(len);

        for ( int i = 0; i < len; i++)
            Serial.print(buf[i]);
        Serial.println("");
    }
}
