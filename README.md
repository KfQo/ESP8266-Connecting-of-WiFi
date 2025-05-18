ESP8266 Serial WiFi Connection Example
This Arduino sketch demonstrates how to connect an ESP8266 WiFi module to a WiFi network using AT commands sent over a software serial interface. The code reads output from the ESP8266 and displays it on the Arduino serial monitor.

📋 What does this code do?
Establishes a software serial connection between an Arduino and an ESP8266 WiFi module.
Sends AT commands to connect the ESP8266 to a specified WiFi network.
Reads and forwards responses from the ESP8266 to the Arduino serial monitor.


Edit the WiFi Name and Password
In the connectToWiFi() function, replace the placeholders with your actual WiFi network name (SSID) and password:
" espSerial.println("AT+CWJAP=\"YourNetworkName\",\"YourPassword\""); "
    Replace YourNetworkName with your WiFi SSID.
    Replace YourPassword with your WiFi password.

Upload the code to your Arduino
Connect the ESP8266 module to the Arduino as follows:
ESP8266 TX → Arduino Pin 2  
ESP8266 RX → Arduino Pin 3

------ Baud (115200) ------
