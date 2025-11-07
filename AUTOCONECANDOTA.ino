#include "wifiConfig.h"
#include "OTAUpdate.h"

void setup() {
  Serial.begin(115200);
  wifiConfigSetup();  // kết nối hoặc phát AP
  initOTA();          // kiểm tra OTA nếu có WiFi
}

void loop() {
  wifiLoop();
}