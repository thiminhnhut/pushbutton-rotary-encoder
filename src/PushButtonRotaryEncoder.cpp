#include "PushButtonRotaryEncoder.h"

PushButtonRotaryEncoder::PushButtonRotaryEncoder(uint8_t CLK_PIN, uint8_t DT_PIN, uint8_t SW_PIN) {
    _CLK_PIN = CLK_PIN;
    _DT_PIN = DT_PIN;
    _SW_PIN = SW_PIN;
}