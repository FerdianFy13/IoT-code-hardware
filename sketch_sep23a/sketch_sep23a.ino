#include <ESP8266WiFi.h>
const char* ssid = "RN"; // Nama AP/Hotspot
const char* password = "arema2003"; // Password AP/Hotspot
void setup() {
Serial.begin(115200);
delay(10);
// Connect to WiFi network ------------------------------------------------
Serial.println();
Serial.println();
Serial.print("Connecting to ");
Serial.println(ssid);
// Mengatur WiFi ----------------------------------------------------------
WiFi.begin(ssid, password); // Mencocokan SSID dan Password
while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.print(".");
}
// Print status Connect ---------------------------------------------------
Serial.println("");
Serial.println("WiFi connected");
Serial.println("IP address: ");
Serial.println(WiFi.localIP());
}
void loop() {
}
