#include <Arduino.h>
#include "sensors.h"
#include "config.h"
#include "robot_types.h"

// Function to initialize sensor

void initSensors()
{
    pinMode(TRIGGER_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
}

// Function to get distance from ultrasonic sensor
float getDistance()
{
    digitalWrite(TRIGGER_PIN, LOW);
    delayMicroseconds(5);
    digitalWrite(TRIGGER_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER_PIN, LOW);

    long Duration = pulseIn(ECHO_PIN, HIGH, time_out);
    ultrasonic_distance_cm = Duration * SPEED_OF_SOUND / 2.0;
    return ultrasonic_distance_cm;
}

// check el distance if it is smaller than threshold

int checkDistance()
{
    float distance = getDistance();
    if (distance < DISTANCE_THRESHOLD && distance > MIN_DISTANCE)
    {
        return 1; // Obstacle detected
    }
    else // ay case tania
    {
        return 0; // No obstacle
    }
}

// check if timeout occurred

int checkTimeout()
{
    long Duration = pulseIn(ECHO_PIN, HIGH, time_out);
    if (Duration == 0)
    {
        return 1; // Timeout occurred
    }
    else
    {
        return 0; // No timeout
    }
}