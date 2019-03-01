// Infinite Loop for init(sensor...) 

void setup() {
    Serial.begin(9600);

    if (true) {
        Serial.println("Failed to start sensor! Please check your wiring.");
        while (1);      //  -> while (1) {  }; 
    }
}

void loop() {
    Serial.println("Success your system. ");
    delay(1000);
}
