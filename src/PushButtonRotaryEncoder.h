#ifndef PushButtonRotaryEncoder_h
#define PushButtonRotaryEncoder_h

#include <Arduino.h>

class PushButtonRotaryEncoder {
private:
    uint8_t _CLK_PIN;
    uint8_t _DT_PIN;
    uint8_t _SW_PIN;

    bool _ACTIVE;
       
    uint8_t _aState;
    uint8_t _aLastState;

    struct RotaryData
    {
        bool avaiable = false;
        int count = 0;
    };

  public:

    PushButtonRotaryEncoder::RotaryData rotaryData;
    PushButtonRotaryEncoder(uint8_t SW_PIN, bool ACTIVE);
    PushButtonRotaryEncoder(uint8_t CLK_PIN, uint8_t DT_PIN);
    PushButtonRotaryEncoder(uint8_t CLK_PIN, uint8_t DT_PIN, uint8_t SW_PIN, bool ACTIVE);

    bool getPushButton();
    void waitRotary();

    void setRotary(bool avaiable, int count);
};
#endif