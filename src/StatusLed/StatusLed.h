#pragma once

class StatusLed{
public:

    StatusLed(int pinNumber);

    void off();
    void on();

private:
    int pinNumber;

};