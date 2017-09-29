#pragma once

#include <Adafruit_NeoPixel.h>

class Effect
{
public:

    Effect(Adafruit_NeoPixel* strip);
    virtual ~Effect();

    void setSpeed(float speed);
    float getSpeed();
    void setBrightness(float brightness);
    float getBrightness();

    virtual void run() = 0;
    virtual void reset();

protected:
    
    float speed;
    int brightness;
    Adafruit_NeoPixel* strip;
    void colorWipe(uint32_t c, uint8_t wait = 0);
};