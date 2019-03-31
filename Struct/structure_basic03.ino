/****************************************
    typedef struct _Name {
        dataType1 name1;
        dataType2 name2;
             :
    } Name;
        Name Var1;
        var1.name1 ~ var1.name2 defines
        Name Var2;
        var2.name1 ~ var2.name2 defines
 ****************************************/
#include <Printf.h>

typedef struct _Person {
    char name[20];
    char blood;
    int  age;
    float eyesight;
} Person;

void setup() {
    Serial.begin(9600);
    printfBegin();    // must use for <Printf.h>
}

void loop() {

    Person p0;      // == struct _Name p0;
    Person p1;      // == struct _Name p1;

    strcpy(p0.name, "DCBack");  // string must be get by strcpy
    p0.blood = 'O';
    p0.age = 55;
    p0.eyesight = 1.5;

    strcpy(p1.name, "ACBack");  // string must be get by strcpy
    p1.blood = 'A';
    p1.age = 60;
    p1.eyesight = 2.0;

    printf("Name     : %s\nBlood    : %c\nAge      : %d\n", p0.name, p0.blood, p0.age);
    Serial.print("Eyesight : "); Serial.println(p0.eyesight);

    printf("Name     : %s\nBlood    : %c\nAge      : %d\n", p1.name, p1.blood, p1.age);
    Serial.print("Eyesight : "); Serial.println(p1.eyesight);

    Serial.end();     // serial ending & can use TX, RX pin, STM32 Error
}
