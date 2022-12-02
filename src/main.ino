#include <Arduino.h>
#include <util/delay.h>

void setup() {
    DDRB = 1<<5;
    PORTB= 0;
}

void loop() {
    _delay_ms(50);
    PORTB ^= 1<<5;
}