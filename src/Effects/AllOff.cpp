#include "AllOff.h"

AllOff::AllOff(Adafruit_NeoPixel* strip) : Effect(strip)
{

}


void AllOff::run()
{
    reset();
}