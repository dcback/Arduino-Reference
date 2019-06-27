// nano_485 Master/Slave
#include <SoftwareSerial.h>

#define SSerialRX        8      //Serial Receive pin(485_RO)
#define SSerialTX        9      //Serial Transmit pin(485_DI)
#define SSerialTxControl 7      //RS485 Direction control

#define RS485Transmit    HIGH
#define RS485Receive     LOW
#define ledPin           13

SoftwareSerial RS485Serial(SSerialRX, SSerialTX); // RX, TX

int byteReceived;
int byteSend;
int ledState = LOW;

void setup() {
    Serial.begin(9600);
    Serial.println("");
    Serial.println(">>> RS485 Master/Slave");
    pinMode(ledPin, OUTPUT);
    pinMode(SSerialTxControl, OUTPUT);

    digitalWrite(SSerialTxControl, RS485Receive);  // Init Transceiver
    RS485Serial.begin(9600);   // set the data rate
}

void loop() {

    // Serial resd & Send by RS485
    if (Serial.available()) {
        digitalWrite(ledPin, HIGH);  // Show activity
        byteReceived = Serial.read();
        digitalWrite(SSerialTxControl, RS485Transmit);  // Enable RS485 Transmit
        RS485Serial.write(byteReceived);          // Send byte to Remote Device
        delay(10);
        digitalWrite(ledPin, LOW);  // Show activity
        digitalWrite(SSerialTxControl, RS485Receive);  // Disable RS485 Transmit
    }

    // RS485 resd & Write to Serial monitor
    if (RS485Serial.available()) { //Look for data from other Device
        digitalWrite(ledPin, HIGH);  // Show activity
        byteReceived = RS485Serial.read();  // Read received byte
        Serial.write(byteReceived);         // Show on Serial Monitor
        delay(10);
        digitalWrite(ledPin, LOW);  // Show activity
    }
}
