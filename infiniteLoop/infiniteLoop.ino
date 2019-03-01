// Infinite Loop for init(sensor...) 

void setup() {
    Serial.begin(9600);

    if (true) {
        while (1) { Serial.println("Failed to start sensor! Please check your wiring."); }
    }
}

void loop() {
    Serial.println("Success your system. ");
    delay(1000);
}
