// Infinite Loop for & while & break

void setup() {
    Serial.begin(9600);
}

void loop() {
    while (1) {
        Serial.println("infinite while loop. ");
        if ( analogRead(A0) <= 0 )  break;
    }

    for (;;) {
        Serial.println("infinite for loop. ");
        if ( analogRead(A0) <= 0 )  break;
    }
    Serial.println(analogRead(A0));
    int ledPin = 13;

    for ( int i = 0; i < 10; i++) {
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        delay(500);
        if ( analogRead(A0) > 0 )  break;
    }
}
