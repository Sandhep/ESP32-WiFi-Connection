#include <Arduino.h>
#include<WiFi.h>

const char* ssid = "YOUR SSID";
const char* password = "YOUR PASSWORD";

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {

}