#include <Arduino.h>
#include <ESP8266WiFi.h> // https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html
#include "config.h"

#define SERIAL_BAUD 115200

void setup() {
    WiFi.mode(WIFI_STA);
    WiFi.hostname(CFG_HOSTNAME);
    WiFi.begin(CFG_WIFI_ESSID, CFG_WIFI_PASSWORD);
    yield();  // esp8266 yield allows WiFi stack to run
}

void loop() {
    delay(500);
    yield();
}
