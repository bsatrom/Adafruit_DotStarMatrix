#pragma once

/* Adafruit_DotStarMatrix library by Adafruit
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class Adafruit_DotStarMatrix
{
public:
  /**
   * Constructor
   */
  Adafruit_DotStarMatrix();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
