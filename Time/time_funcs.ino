/****************************************************************
    millis(unsigned long) : current time(ms) after run program
    micros(unsigned long) : current time(us) after run program
    delay(unsigned long) : ms delay
    micros(unsigned long) : us dealy
*****************************************************************/
void setup() {
    Serial.begin(9600);

    Serial.print(micros()); Serial.print("us");
    Serial.print("\t\t");
    Serial.print(millis()); Serial.println("ms");

    for ( int i = 0; i < 10; i++ ) {
        delay(500);                 // 500ms
        delayMicroseconds(500000);  // effective value : 3 ~ 16383

        Serial.print(micros()); Serial.print("us");
        Serial.print("\t");
        Serial.print(millis()); Serial.println("ms");
    }
}

void loop() {
}
