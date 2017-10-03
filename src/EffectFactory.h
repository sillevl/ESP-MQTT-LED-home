#pragma once

#include "Effects/Effect.h"
#include <Adafruit_NeoPixel.h>

class EffectFactory
{
public:
    EffectFactory(Adafruit_NeoPixel* strip);

    Effect* getEffect(byte* data, unsigned int p_length);

private:
    Adafruit_NeoPixel* strip;
};