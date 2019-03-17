/***************************************************
    char : 'A' -> 65(ASCII) ~ 'Z' -> 90(ASCII)
    char : 'a' -> 97(ASCII) ~ 'z' -> 122(ASCII)
****************************************************/
void setup() {
    Serial.begin(9600);

    for ( int i = 65; i < 91; i++ ) {
        Serial.print(char(i)); Serial.print("\t"); Serial.println(char(i), DEC);
    }

    for ( int i = 97; i < 123; i++ ) {
        Serial.print(char(i)); Serial.print("\t"); Serial.println(char(i), DEC);
    }
}

void loop() {
}
