#ifndef config_h
#define config_h
// ================================sensor_config=======================================
#define TRIGGER_PIN 12         // GPIO pin for trigger
#define ECHO_PIN 13            // GPIO pin for echo
#define time_out 50000         // Timeout for ultrasonic sensor (in microseconds)
#define MAX_DISTANCE 400       // Maximum distance (cm) for ultrasonic sensor
#define MIN_DISTANCE 2         // Minmum distance (cm) for ultrasonic sensor
#define SPEED_OF_SOUND 0.0345  // Speed of sound in cm/us (22C)
#define DISTANCE_THRESHOLD 200 // Distance threshold for obstacle detection (cm)

#endif
