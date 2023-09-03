#include <avr/io.h>

#include "timers.h"

/* PHASE CORRECT PWM */
void init_timer0() {
    TCCR0A |= (1 << COM0A0);                    // 
    TCCR0A |= (1 << COM0A1);
    TCCR0A |= (1 << COM0B0);                    // 
    TCCR0A |= (1 << COM0B1);
    TCCR0A |= (1 << WGM00);                     // mode 1: top = 0xFF
    TCCR0B |= (1 << CS00);
    // TCCR0B |= (1 << CS01);
    // TCCR0B |= (1 << CS02);
    TIMSK0 |= (1 << TOIE0);
    OCR0A = 255;                                 // duty cycle on OC0A pin
    OCR0B = 255;                                // duty cyCle on OC0B pin
}