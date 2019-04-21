typedef struct {
    word sensor1;
    word sensor2;
    word sensor3;
    word sensor4;
    word sensor5;
} sensorInfo;

char msg[100];

void setup() {
    Serial.begin(115200);
}

void loop() {

    sensorInfo sInfo;
    sInfo.sensor1 = 9999; sInfo.sensor2 = 20; sInfo.sensor3 = 30; sInfo.sensor4 = 40; sInfo.sensor5 = 9999;

    sprintf(msg, ">>>[SENSOR] %d , %d , %d , %d , %d", sInfo.sensor1, sInfo.sensor2, sInfo.sensor3, sInfo.sensor4, sInfo.sensor5);
    Serial.println(msg);
    Serial.println("------------------------");
    delay(1000);
}
