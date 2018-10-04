#include <Arduino.h>
#include <PushButtonRotaryEncoder.h>

#define __CKL_PIN__ 12
#define __DT_PIN__ 14
#define __SW_PIN__ 16
#define __ACTIVE_SW__ LOW

PushButtonRotaryEncoder RotaryEncoder(__CKL_PIN__, __DT_PIN__, __SW_PIN__, __ACTIVE_SW__);

void setup() {
    Serial.begin(115200);
    Serial.println("Hello Create Library!");
}

void loop() {
    if (RotaryEncoder.getPushButton()) {
        Serial.println("Push Button");
    }

    RotaryEncoder.waitRotary();
    if (RotaryEncoder.rotaryData.avaiable) {
        Serial.println("Count = " + String(RotaryEncoder.rotaryData.count));
        switch (RotaryEncoder.rotaryData.count) {
            case 10:
                Serial.println("Option 1");
                delay(1000);
                break;
            case 20:
                Serial.println("Option 2");
                delay(1000);
                break;
            case 30:
                Serial.println("Option 3");
                RotaryEncoder.setRotary(false, 0);
                delay(1000);
                break;
        }
    }
}