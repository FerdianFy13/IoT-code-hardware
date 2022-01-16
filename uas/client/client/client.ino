#include <ESP8266WiFi.h>
const char* ssid = "Ferdi StackDev";         // SSID network connection
const char* password = "LiveWireVueJS"; // network connection password

void setup() {
  Serial.begin(115200);
  delay(10);
  // Connect to WiFi network ------------------------------------------------
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  // Setting up WiFi ----------------------------------------------------------
  WiFi.begin(ssid, password); // Configure SSID and Password
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Print status Connect ---------------------------------------------------
  Serial.println("");
  Serial.print("WiFi connected ");
  Serial.println(ssid);
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("Subnet Mask address: ");
  Serial.println(WiFi.subnetMask());
}
void loop() {
}
