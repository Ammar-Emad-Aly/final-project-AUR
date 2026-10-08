#pragma once

#include <Arduino.h>

// ================================sensor_config=======================================
#define TRIGGER_PIN 12         // GPIO pin for trigger
#define ECHO_PIN 13            // GPIO pin for echo
#define time_out 50000         // Timeout for ultrasonic sensor (in microseconds)
#define MAX_DISTANCE 400       // Maximum distance (cm) for ultrasonic sensor
#define MIN_DISTANCE 2         // Minmum distance (cm) for ultrasonic sensor
#define SPEED_OF_SOUND 0.0345  // Speed of sound in cm/us (22C)
#define DISTANCE_THRESHOLD 200 // Distance threshold for obstacle detection (cm)

// ================================communication_config=======================================

// Keep real network credentials out of source control.
inline constexpr char WIFI_SSID[] = "AUR_ROBOT_WIFI";
inline constexpr char WIFI_PASSWORD[] = "CHANGE_ME";
inline constexpr uint16_t UDP_COMMAND_PORT = 8888;
inline constexpr uint16_t UDP_TELEMETRY_PORT = 8889;
inline constexpr uint32_t WIFI_RECONNECT_INTERVAL_MS = 2000;
inline constexpr uint32_t COMMAND_TIMEOUT_MS = 500;
inline constexpr uint32_t TELEMETRY_PERIOD_MS = 100;

