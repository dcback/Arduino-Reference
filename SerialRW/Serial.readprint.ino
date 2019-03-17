/***************************************************
    char c = Serial.read() -> byte unit reading
    println : ln == 10
****************************************************/
void setup() {
    Serial.begin(9600);
}

void loop() {
    if (Serial.available() > 0) {
        char c = Serial.read();
        Serial.print(c);
    }
}
