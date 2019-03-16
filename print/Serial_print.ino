/******************************************************
    Serial.print("\n") == Serial.println("");
    Serial.print("\n\n") == Serial.println("\n")
    Serial.print("\t") -> TAB Shift
    Serial.write(val, str, buf) -> INT to ASCII print
******************************************************/
char buf[100] =  "0123456789";

void setup() {
    Serial.begin(9600);

    Serial.println("1");        // ln -> next line
    Serial.print("2\n");        // \n -> next line
    Serial.println("3\n");      // ln("\n") == \n\n
    Serial.print("4\n\n");      // \n\n == ln("\n")

    Serial.print(65);           // DEC direct print
    Serial.print("\t");         // \t -> TAB Shift
    Serial.write(65);           // ASCII  print
    Serial.print("\t");
    Serial.write(48);           // ASCII  print
    Serial.print("\n");

    Serial.write(65 + 3);       // ASCII  print
    Serial.print("\t");
    Serial.write("DCBACK");     // str  print
    Serial.print("\t");
    Serial.write(buf);          // buf[]  print
}

void loop() {
}
