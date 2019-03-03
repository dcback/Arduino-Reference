/*****************************************************
    PROGMEM : string write to F_memory
    (const __FlashStringHelper *) : Read F_memory str
    pgm_read_word_near : Read F_memory Int
******************************************************/
const PROGMEM char NAME[] = {"I am DCBACK! "};
const PROGMEM uint16_t INTS[] = { 123, 456, 789, 876, 543 };

unsigned int displayInt;

void setup() {
    Serial.begin(9600);
    while (!Serial);        // wait for serial port to connect.
}

void loop() {
    Serial.print((const __FlashStringHelper *)NAME);
    Serial.print("\t");

    for (int i = 0; i < 5; i++)     // 5-integer
    {
        displayInt = pgm_read_word_near(INTS + i);
        Serial.print(displayInt);
        Serial.print(" ");
    }
    Serial.println();
    delay(1000);
}
