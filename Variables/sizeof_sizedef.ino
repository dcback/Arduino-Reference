/**********************************************
    intx_t      : x == bits
    int8_t      : 1 byte
    int16_t     : 2 byte
    int32_t     : 4 byte
    int64_t     : 8 byte
***********************************************/
void setup() {
    Serial.begin(9600);

    Serial.print("int8_t   : "); Serial.println(sizeof(int8_t));
    Serial.print("int16_t  : "); Serial.println(sizeof(int16_t));
    Serial.print("int32_t  : "); Serial.println(sizeof(int32_t));
    Serial.print("int64_t  : "); Serial.println(sizeof(int64_t));
    Serial.print("uint8_t  : "); Serial.println(sizeof(uint8_t));
    Serial.print("uint16_t : "); Serial.println(sizeof(uint16_t));
    Serial.print("uint32_t : "); Serial.println(sizeof(uint32_t));
    Serial.print("uint64_t : "); Serial.println(sizeof(uint64_t));
}

void loop() {
}
