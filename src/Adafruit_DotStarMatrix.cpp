/* Adafruit_DotStarMatrix library by Adafruit
 */

#include "Adafruit_DotStarMatrix.h"

/**
 * Constructor.
 */
Adafruit_DotStarMatrix::Adafruit_DotStarMatrix()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void Adafruit_DotStarMatrix::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void Adafruit_DotStarMatrix::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void Adafruit_DotStarMatrix::doit()
{
    Serial.println("called doit");
}
