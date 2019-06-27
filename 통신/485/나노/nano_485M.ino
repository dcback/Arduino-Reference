// nano_485 Master
#include <SoftwareSerial.h>

#define SSerialRX        8      //Serial Receive pin(485_RO)
#define SSerialTX        9      //Serial Transmit pin(485_DI)
#define SSerialTxControl 7      //RS485 Direction control

#define RS485Transmit   HIGH
#define RS485Receive    LOW
#define pinLed          13

SoftwareSerial RS485Serial(SSerialRX, SSerialTX); // RX, TX

int byteReceived;
int byteSend;
int packet[] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6};
int ledState = HIGH;

void setup() {
    Serial.begin(9600);
    Serial.println(">>> RS485 Master sending");
    pinMode(pinLed, OUTPUT);
    pinMode(SSerialTxControl, OUTPUT);

    digitalWrite(SSerialTxControl, RS485Receive);  // Init Transceiver
    RS485Serial.begin(9600);   // set the data rate
}

void loop() {

    for (int i = 0; i <= 5; i++) {
        digitalWrite(SSerialTxControl, RS485Transmit);  // Enable RS485 Transmit
        RS485Serial.write(packet[i]);           // Send byte to Remote Arduino
        Serial.print(packet[i]); Serial.print(" ");
        digitalWrite(pinLed, ledState);      // Show activity
    }
    Serial.println();
    delayMicroseconds(100);
    digitalWrite(SSerialTxControl, RS485Receive);       // Disable RS485 Transmit
    ledState = !ledState;
    delay(1000);
}
