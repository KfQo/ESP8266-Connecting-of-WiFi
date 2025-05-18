# ESP8266 Serial WiFi Connection Example

This Arduino sketch demonstrates how to connect an **ESP8266 WiFi module** to a WiFi network using AT commands sent over a software serial interface. The code also reads output from the ESP8266 and displays it on the Arduino Serial Monitor.

---

## 📋 Features

- **Establishes a software serial connection** between Arduino and ESP8266.
- **Sends AT commands** to connect the ESP8266 to your specified WiFi network.
- **Reads and forwards responses** from the ESP8266 directly to the Serial Monitor for easy debugging.

---

## 🚀 Getting Started

### 1. Edit the WiFi Name and Password

In the `connectToWiFi()` function, replace the placeholders with your actual WiFi network name (SSID) and password:

```cpp
espSerial.println("AT+CWJAP=\"YourNetworkName\",\"YourPassword\"");
