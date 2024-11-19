#include <Arduino.h>

#include <ESP32Time.h>

ESP32Time rtc; // Create an instance of the ESP32Time class

void setup() {
  Serial.begin(115200);

  // Set time manually: (year, month, day, hour, minute, second)
  rtc.setTime(00, 00, 10, 19, 11, 2024); // Set time to 19th Nov 2024, 10:30:00

  // Print current time
  Serial.println(rtc.getDateTime());   // Full date and time in "YYYY-MM-DD HH:MM:SS" format
  Serial.println(rtc.getTime("%H:%M:%S")); // Custom format, e.g., "10:30:00"
}

void loop() {
  // Continuously print time every second
  delay(1000);
  Serial.println(rtc.getDateTime());
}
