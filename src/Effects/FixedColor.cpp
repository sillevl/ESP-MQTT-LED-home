#include "FixedColor.h"

FixedColor::FixedColor(Adafruit_NeoPixel* strip, uint32_t color) : Effect(strip)
{
    this->color = color;
}


void FixedColor::run()
{
    colorWipe(color);
}