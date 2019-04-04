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

void LoRa_Send();
void led_Blink();
void Init_Send();

int counter = 0;

void setup() {
    Init_Send();
}

void loop() {
    LoRa_Send();
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

void LoRa_Send() {
    Serial.print("Sending packet: ");
    Serial.println(counter);

    // send packet
    LoRa.beginPacket();
    LoRa.print("hello ");
    LoRa.print(counter);
    LoRa.endPacket();

    led_Blink();
    counter++;
}

void Init_Send() {
    Serial.begin(9600);
    //  while (!Serial);
    pinMode(ledPin, OUTPUT);

    LoRa.setPins(csPin, resetPin, irqPin);  // CS, RST, IRQ Pin Set
    Serial.println("LoRa Sender");

    if (!LoRa.begin(915E6)) {
        Serial.println("Starting LoRa failed!");
        while (1);
    }
}
