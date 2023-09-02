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

/* CTC */
// void init_timer1() {
//     TCCR1B |= (1 << WGM12);                     // phase and frequency correct, OCR1A as TOP
//     TCCR1B |= (1 << CS10);                      // f=clk_io/1024
//     TCCR1B |= (1 << CS12);
//     TIMSK1 |= (1 <<OCIE1A);                     // enable OUTPUT COMPARE A MATCH INTERRUPT
//     OCR1A = 31249;                              // 0.5 Hz
// }

/* PHASE CORRECT PWM */
// void init_timer1() {
//     TCCR1A |= (1 << COM1A1);                    // clear on match when up-counting, set on match when down-counting
//     TCCR1A |= (1 << WGM10);                     // WGM1[3:0] = 0b1001
//     TCCR1B |= (1 << WGM12);                     // phase and frequency correct, OCR1A as TOP
//     TCCR1B |= (1 << CS10);                      // f=clk_io/64=250kHz
//     // TCCR1B |= (1 << CS11);
//     TIMSK1 |= (1 <<OCIE1A);                     // enable COMPARE MATCH A INTERRUPT
//     OCR1A = 127;                                //
// }