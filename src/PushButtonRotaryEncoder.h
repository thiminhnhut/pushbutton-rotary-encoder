#ifndef PushButtonRotaryEncoder_h
#define PushButtonRotaryEncoder_h

#include <Arduino.h>

class PushButtonRotaryEncoder {
private:
    uint8_t _CLK_PIN;
    uint8_t _DT_PIN;
    uint8_t _SW_PIN;
public:
    PushButtonRotaryEncoder(uint8_t CLK_PIN, uint8_t DT_PIN, uint8_t SW_PIN);
};
#endif