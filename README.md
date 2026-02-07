# Smart Energy Meter with Real-Time IoT Monitoring

## Overview
This project measures real-time electrical parameters such as voltage, current,
power, and energy consumption using an embedded system. The collected data
can be uploaded to a cloud dashboard for remote monitoring and analysis.

## Hardware Used
- Arduino Uno
- Voltage Sensor
- Current Sensor (ACS712)
- ESP8266 Wi-Fi Module
- Electrical Load (Bulb/Fan)

## Software & Tools
- Embedded C (Arduino IDE)
- ESP8266 WiFi Library
- Adafruit IO (Cloud Platform)
- Serial Monitor for debugging

## System Working
1. Voltage and current sensors measure electrical parameters.
2. Arduino processes analog data using ADC.
3. Power and energy consumption are calculated internally.
4. ESP8266 enables real-time IoT data transmission to cloud dashboard.

## Features
- Real-time voltage and current monitoring
- Power and energy calculation
- IoT-enabled remote monitoring
- Modular and scalable architecture

## Applications
- Smart energy monitoring systems
- Power usage analysis
- IoT-based energy metering

## Future Scope
- Mobile app integration
- Billing and cost estimation
- Multi-load monitoring

