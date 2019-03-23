/****************************************************************
    millis(unsigned long) : current time(ms) after run program
    micros(unsigned long) : current time(us) after run program
    delay(unsigned long) : ms delay
    micros(unsigned long) : us dealy
*****************************************************************/
void setup() {

    unsigned long us = micros();
    unsigned long ms = millis();

    Serial.begin(9600);

    delay(1);                 // 1ms
    delayMicroseconds(1000);  // 1ms(1000us) -> effective value : 3 ~ 16383

    Serial.print(us); Serial.print("us");
    Serial.print("\t");
    Serial.print(ms); Serial.println("ms");

    Serial.print(micros()); Serial.print("us");
    Serial.print("\t");
    Serial.print(millis()); Serial.println("ms");
}

void loop() {
}
