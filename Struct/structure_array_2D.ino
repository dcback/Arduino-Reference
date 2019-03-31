/******************************************
    typedef struct {
        dataType1 name1;
        dataType2 name2;
             :
    } Name;
    struct Name var[100];
        var[0].name1 ~ var[99].name2 defines
 ******************************************/
#include <Printf.h>

typedef struct {
    int onX;
    int onY;
} ledPos;

void setup() {
    Serial.begin(9600);
    printfBegin();    // must use for <Printf.h>
}

void loop() {
    ledPos p;

    ledPos onLed[] = { {0, 0}, {0, 1}, {1, 0}, {1, 1}, {2, 0}, {2, 1}, {3, 0}, {3, 1}, {4, 0}, {4, 1}, };

    for (int k = 0; k < 10; k++) {
        p = onLed[k];
        printf("%d , %d\n", p.onX, p.onY );
    };
    
    Serial.end();     // serial ending
}
