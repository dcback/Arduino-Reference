/******************************************
    typedef struct Name {
        dataType1 name1;
        dataType2 name2;
             :
    };
    struct Name var[100];
        var[0].name1 ~ var[99].name2 defines
 ******************************************/
#include <Printf.h>

typedef struct {
    int x;
    int y;
} Point2D;

void setup() {
    Serial.begin(9600);
    printfBegin();    // must use for <Printf.h>
}

void loop() {

    Point2D p[10];

    p[0].x = 10;
    p[0].y = 20;

    p[1].x = 30;
    p[1].y = 40;

    p[2].x = 50;
    p[2].y = 60;

    p[3].x = 70;
    p[3].y = 80;

    p[4].x = 90;
    p[4].y = 100;

    printf("%d ,%d ,%d ,%d ,%d\n", p[0].x, p[1].x, p[2].x, p[3].x, p[4].x);
    printf("%d ,%d ,%d ,%d ,%d\n", p[0].y, p[1].y, p[2].y, p[3].y, p[4].y);

    Serial.end();     // serial ending
}
