#include "Effect.h"

Effect::Effect(Adafruit_NeoPixel* strip)
{
    this->strip = strip;
    setSpeed(1.0);
    setBrightness(1.0);
    reset();
}

Effect::~Effect()
{
    delete strip;
}

void Effect::setSpeed(float speed)
{
    this->speed = speed;
}

float Effect::getSpeed()
{
    return speed;
}

void Effect::setBrightness(float brightness)
{
    this->brightness = brightness;
    strip->setBrightness(brightness);
}

float Effect::getBrightness()
{
    return brightness;
}

void Effect::reset()
{
    colorWipe(strip->Color(0, 0, 0));
}

void Effect::colorWipe(uint32_t c, uint8_t wait) {
    strip->show();
    for (uint16_t i = 0; i < strip->numPixels(); i++) {
        strip->setPixelColor(i, c);
        strip->show();
        delay(wait);
    }
}
