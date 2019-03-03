/************************************************
    val -> string
    String(val)
    String(val, base) base : BIN, OCT, DEC, HEX
    String(val, decimalPlaces)
************************************************/
char buf[1000];

void setup() {
    Serial.begin(9600);
    Serial.println("[Serial begin]");
}

void loop() {
    String strquo = "Hello String";             // using a constant String
    String strstr = String("This is ");         // converting a constant string into a String object
    String strcha = String('a');                // converting a constant char into a String
    String strlnk = String(strstr + strcha + " Apple");  // + various strings
    String strbin = String(15, BIN);            // int and a base (binary)
    String stroct = String(15, OCT);            // int and a base (decimal)
    String strint = String(15);                 // constant integer: 15(dec) -> 1111 -> 17 -> 15 -> F
    String strhex = String(15, HEX);            // int and a base (hexadecimal)
    String strmil = String(millis(), DEC);      // long and a base
    String strflt = String(3.14, 2);            // float and the decimal places(0.12)
    String stradc = String(analogRead(0), DEC); // analogRead and a base (decimal)

    Serial.print("quote : "); Serial.println(strquo);
    Serial.print("link  : "); Serial.println(strlnk);
    Serial.print("bin   : "); Serial.println(strbin);
    Serial.print("oct   : "); Serial.println(stroct);
    Serial.print("int   : "); Serial.println(strint);
    Serial.print("hex   : "); Serial.println(strhex);
    Serial.print("milli : "); Serial.println(strmil);
    Serial.print("float : "); Serial.println(strflt);
    Serial.print("adc   : "); Serial.println(stradc);

    delay(1000);
}
