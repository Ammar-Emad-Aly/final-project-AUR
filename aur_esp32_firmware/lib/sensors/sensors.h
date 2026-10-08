#ifndef sensors_h
#define sensors_h

void initSensors();  // Function to initialize sensors
float getDistance(); // Function to get distance from ultrasonic
int checkDistance(); // Function to check if distance is smaller than threshold
int checkTimeout();  // Function to check if timeout occurred
#endif