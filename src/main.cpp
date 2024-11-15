#include <Arduino.h>
#include <ESP8266WiFi.h> // https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html

#include "config.h"

void setup() {
    WiFi.mode(WIFI_STA);
    WiFi.hostname(CFG_HOSTNAME);
    WiFi.begin(CFG_WIFI_ESSID, CFG_WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED) {
        yield();
        delay(500);
    }
}

void loop() {}
