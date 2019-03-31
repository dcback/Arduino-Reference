/***************************************
        Arduino ESP8266  STM32F103
    SDA    4    2(GPIO4)    PB7
    SCL    5    1(GPIO5)    PB6
****************************************/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
    lcd.begin();        // LCD initialize
    lcd.backlight();    // Backlight on

    lcd.setCursor(3, 0);
    lcd.print("Hello, world!");
    lcd.setCursor(2, 1);
    lcd.print("Ywrobot Arduino!");
    lcd.setCursor(0, 2);
    lcd.print("Arduino LCM IIC 2019");
    lcd.setCursor(2, 3);
    lcd.print("Power By Ec-yuan!");
}

void loop() {
    // Nothing Absolutely Nothing!
}
