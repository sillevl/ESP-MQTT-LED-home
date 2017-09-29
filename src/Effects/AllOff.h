#pragma once

#include "Effect.h"

class AllOff : public Effect
{
public:
    AllOff(Adafruit_NeoPixel* strip);

    virtual void run();
};