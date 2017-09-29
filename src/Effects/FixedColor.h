#pragma once

#include "Effect.h"

class FixedColor : public Effect
{
public:
    FixedColor(Adafruit_NeoPixel* strip, uint32_t color);

    virtual void run();

private:
    uint32_t color;
};