/******************************************
    Adruino : 1~13, A0~A7
    STM32   : PA0~PA15, PB0~PB15, PC0~PC15
    ESP8266 : 0~8
*******************************************/
#define ledPin  2   // 2 == GPIO4
unsigned int cnt;
 
void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    
    Serial.println(cnt);
    cnt++;
}
