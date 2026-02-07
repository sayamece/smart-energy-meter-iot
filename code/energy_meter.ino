#include <ESP8266WiFi.h>

const int voltagePin = A0;
const int currentPin = A1;

float voltage = 0;
float current = 0;
float power = 0;
float energy = 0;

// WiFi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("WiFi Connected");
}

void loop() {
  int vRaw = analogRead(voltagePin);
  int iRaw = analogRead(currentPin);

  voltage = vRaw * (5.0 / 1023.0) * 5;
  current = (iRaw - 512) * (5.0 / 1023.0);

  power = voltage * current;
  energy += power * (5.0 / 3600.0); // Wh calculation

  Serial.print("V: ");
  Serial.print(voltage);
  Serial.print(" | I: ");
  Serial.print(current);
  Serial.print(" | P: ");
  Serial.print(power);
  Serial.print(" | E: ");
  Serial.println(energy);

  delay(5000);
}
