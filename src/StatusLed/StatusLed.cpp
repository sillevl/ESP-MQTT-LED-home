#include "StatusLed.h"
#include <Arduino.h>


StatusLed::StatusLed(int pinNumber)
{
    this->pinNumber = pinNumber;
    off();
}

void StatusLed::on()
{
    digitalWrite(pinNumber, LOW);
}

void StatusLed::off()
{
    pinMode(pinNumber, OUTPUT);     // Initialize the BUILTIN_LED pin as an output
    digitalWrite(pinNumber, HIGH);
}