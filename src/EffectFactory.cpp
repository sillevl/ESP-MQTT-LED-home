#include "EffectFactory.h"
#include "Effects/Effects.h"

EffectFactory::EffectFactory(Adafruit_NeoPixel* strip)
{
    this->strip = strip;
}

Effect* EffectFactory::getEffect(byte* data, unsigned int p_length)
{
    Effect* effect;

    String payload;
    for (uint8_t i = 0; i < p_length; i++) {
        payload.concat((char)data[i]);
      }
      Serial.print("---");
         Serial.println(payload);

    if (payload.equals(String("off"))) {
        effect = new AllOff(strip);
      }
     else if (payload.equals(String("on"))) {
        effect = new FixedColor(strip, strip->Color(255,255,255));
      }
       else if (payload.equals(String("green"))) {
        effect = new FixedColor(strip, strip->Color(0,255,0));
      }
       else if (payload.equals(String("blue"))) {
        effect = new FixedColor(strip, strip->Color(0,0,255));
      }
       else if (payload.equals(String("red"))) {
        effect = new FixedColor(strip, strip->Color(255,0,0));
      }
    

    return effect;
}