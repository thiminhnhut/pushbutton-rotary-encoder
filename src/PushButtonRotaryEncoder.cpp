#include "PushButtonRotaryEncoder.h"

PushButtonRotaryEncoder::PushButtonRotaryEncoder(uint8_t SW_PIN, bool ACTIVE)
{
    _SW_PIN = SW_PIN;
    _ACTIVE = ACTIVE;
    pinMode(SW_PIN, INPUT_PULLUP);
}

PushButtonRotaryEncoder::PushButtonRotaryEncoder(uint8_t CLK_PIN, uint8_t DT_PIN)
{
    _CLK_PIN = CLK_PIN;
    _DT_PIN = DT_PIN;
    pinMode(CLK_PIN, INPUT);
    pinMode(DT_PIN, INPUT);

    _aLastState = digitalRead(_CLK_PIN);
}

PushButtonRotaryEncoder::PushButtonRotaryEncoder(uint8_t CLK_PIN, uint8_t DT_PIN, uint8_t SW_PIN, bool ACTIVE)
{
    _CLK_PIN = CLK_PIN;
    _DT_PIN = DT_PIN;
    _SW_PIN = SW_PIN;
    _ACTIVE = ACTIVE;

    pinMode(SW_PIN, INPUT_PULLUP);
    pinMode(CLK_PIN, INPUT);
    pinMode(DT_PIN, INPUT);

    _aLastState = digitalRead(_CLK_PIN);
}

bool PushButtonRotaryEncoder::getPushButton() {
    if (digitalRead(_SW_PIN) == _ACTIVE) {
        delay(200);
        while (digitalRead(_SW_PIN) == _ACTIVE) {
            delay(0);
        }
        return true;
    } else {
        return false;
    }
}

void PushButtonRotaryEncoder::waitRotary() {
    _aState = digitalRead(_CLK_PIN);
    if (_aState != _aLastState) {
        if (digitalRead(_DT_PIN) != _aState) {
            rotaryData.count++;
            _aState = !_aState;
        }
        else {
            rotaryData.count--;
            _aState = !_aState;
        }
        rotaryData.avaiable = true;
        delay(100);
    } else {
        rotaryData.avaiable = false;
    }
    _aLastState = _aState;
}

void PushButtonRotaryEncoder::setRotary(bool avaiable, int count) {
    rotaryData.avaiable = false;
    rotaryData.count = 0;
}