/***************************************************
    const type var & printf & printf_P
****************************************************/
#include <Printf.h>

const int inum = 314;
const float fnum = 3.14;
const char c = 'a';
const char str[] = "abc";

void setup() {
    Serial.begin(9600);
    printfBegin();    // must for use <Printf.h>

    Serial.print(inum); Serial.print("\t");
    Serial.print(c); Serial.print("\t");
    Serial.println(str);

    printf_P(PSTR("%d\t%c\t%s\n"), inum, c, str);  // Flash use
    
    printf("%d\t%c\t%s\n", inum, c, str);          // RAM use
    Serial.println(fnum);
}

void loop()
{
}
