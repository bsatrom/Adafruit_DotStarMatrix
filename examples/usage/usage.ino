// Example usage for Adafruit_DotStarMatrix library by Adafruit.

#include "Adafruit_DotStarMatrix.h"

// Initialize objects from the lib
Adafruit_DotStarMatrix adafruit_DotStarMatrix;

void setup() {
    // Call functions on initialized library objects that require hardware
    adafruit_DotStarMatrix.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    adafruit_DotStarMatrix.process();
}
