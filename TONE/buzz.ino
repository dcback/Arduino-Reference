/************************************************
    [ tone ]
    ||||||||||||||_________||||||||||||||______
    <- duration -> 
    <------- delay ------->
************************************************/
#define buzzPin     6

void setup() {
}

void loop() {
    tone(buzzPin, 500, 1000);   // tone(pin, freq, duartion)
    delay(2000);
    noTone(buzzPin);            // noTone(pin)
}
