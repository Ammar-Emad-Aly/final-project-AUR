#pragma once

#include <Arduino.h>

// ================================ sensor_config =======================================
#define TRIGGER_PIN 12         // GPIO pin for trigger
#define ECHO_PIN 13            // GPIO pin for echo
#define TIME_OUT 50000         // Timeout for ultrasonic sensor (microseconds)
#define MAX_DISTANCE 400       // Maximum distance (cm)
#define MIN_DISTANCE 2         // Minimum distance (cm)
#define SPEED_OF_SOUND 0.0345  // Speed of sound in cm/us (22C)
#define DISTANCE_THRESHOLD 200 // Distance threshold for obstacle detection (cm)

// ================================ wheelEncoders_config =======================================
#define ENCODER_FL_PIN 39
#define ENCODER_FR_PIN 36
#define ENCODER_BL_PIN 34
#define ENCODER_BR_PIN 35

#define WHEEL_DIAMETER 0.026
#define WHEEL_CIRCUMFERENCE 0.08168
#define TICKS_PER_REV 20
#define DISTANCE_PER_TICK 0.004084
#define WHEEL_BASE 0.15

// ================================ IMU_config =======================================
#define SDA_PIN 21
#define SCL_PIN 22

// ============================================================================
//  MOTOR DRIVERS (2x L298N) 
// ============================================================================

// L298N FRONT MOTORS (Front-Left & Front-Right) 
#define PIN_MOTOR_FL_IN1 25
#define PIN_MOTOR_FL_IN2 26
#define PIN_MOTOR_FL_ENA 27  // PWM Speed Control FL

#define PIN_MOTOR_FR_IN3 32
#define PIN_MOTOR_FR_IN4 33
#define PIN_MOTOR_FR_ENB 14  // PWM Speed Control FR

// L298N  BACK MOTORS (Back-Left & Back-Right)
#define PIN_MOTOR_BL_IN1 18
#define PIN_MOTOR_BL_IN2 19
#define PIN_MOTOR_BL_ENA 13  // PWM Speed Control BL

#define PIN_MOTOR_BR_IN3 23
#define PIN_MOTOR_BR_IN4 5
#define PIN_MOTOR_BR_ENB 12  // PWM Speed Control BR

// ============================================================================
// 2. SERVO MOTORS (2x MG995 180°)
// ============================================================================
#define PIN_SERVO_1 4   // Servo 1 Signal (MG995)
#define PIN_SERVO_2 16  // Servo 2 Signal (MG995)

// ================================ communication_config =======================================

// Keep real network credentials out of source control.
inline constexpr char WIFI_SSID[] = "AUR_ROBOT_WIFI";
inline constexpr char WIFI_PASSWORD[] = "CHANGE_ME";

inline constexpr uint16_t UDP_COMMAND_PORT = 8888;
inline constexpr uint16_t UDP_TELEMETRY_PORT = 8889;

inline constexpr uint32_t WIFI_RECONNECT_INTERVAL_MS = 2000;
inline constexpr uint32_t COMMAND_TIMEOUT_MS = 500;
inline constexpr uint32_t TELEMETRY_PERIOD_MS = 100;