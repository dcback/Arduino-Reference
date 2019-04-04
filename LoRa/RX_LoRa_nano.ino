/*****************************************************
    [SPI]       ATm328p     STM32       ESP8266
    MOSI        D11         PA7         D7(GPIO13)
    MISO        D12         PA6         D6(GPIO12)
    SCK/CLK     D13         PA5         D5(GPIO14)
    NSS/CSN     D10         PA4         D8{GPIO15)
    NRESET      D9          PC14        D0(GPIO16)
    DIO0        D2          PA1         D1(GPIO5)
    VCC         3.3V        3.3V        3.3V
******************************************************/
#include <SPI.h>
#include <LoRa.h>

#define ledPin      13
#define csPin       10
#define resetPin    9
#define irqPin      2

void LoRa_Receive();
void led_Blink();
void Init_Receive();

void setup() {
    Init_Receive();
}

void loop() {
    LoRa_Receive();
}

// ===========================
// Functions()
// ===========================
void led_Blink() {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
}

void LoRa_Receive() {
    // try to parse packet
    int packetSize = LoRa.parsePacket();
    if (packetSize) {
        // received a packet
        Serial.print("Received packet '");

        // read packet
        while (LoRa.available()) {
            Serial.print((char)LoRa.read());
        }

        // print RSSI of packet
        Serial.print("' with RSSI ");
        Serial.println(LoRa.packetRssi());
        led_Blink();
    }
}

void Init_Receive() {
    Serial.begin(9600);
    //    while (!Serial);
    pinMode(ledPin, OUTPUT);

    LoRa.setPins(csPin, resetPin, irqPin);  // CS, RST, IRQ Pin Set
    Serial.println("LoRa Receiver");

    if (!LoRa.begin(915E6)) {
        Serial.println("Starting LoRa failed!");
        while (1);
    }
}
