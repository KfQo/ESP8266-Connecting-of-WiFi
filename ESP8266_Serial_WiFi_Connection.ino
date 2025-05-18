#include <SoftwareSerial.h>

// This code establishes a serial connection between Arduino and ESP8266, 
// connects the ESP8266 to a specified WiFi network using AT commands, 
// and displays the ESP8266's responses in the Serial Monitor.

SoftwareSerial espSerial(2, 3); // RX, TX

void setup() {
  Serial.begin(115200);
  espSerial.begin(115200); // Ensure the baud rate matches your ESP8266 settings

  // Connect to the WiFi network
  connectToWiFi();
}

void loop() {
  // Read data from ESP8266 and forward it to Serial Monitor
  while (espSerial.available()) {
    Serial.write(espSerial.read());
  }
}

void connectToWiFi() {
  espSerial.println("AT+CWJAP=\"YourNetworkName\",\"YourPassword\""); // <-- Edit this line
  delay(5000); // Wait for connection
  espSerial.println("AT+CIFSR"); // Request the IP address
}
