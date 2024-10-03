/*
 * File:   main.c
 */

#include <xc.h>
#include "main.h"
#include "digital_keypad.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

static void init_config(void) {
    LED_ARRAY1 = OFF;
    LED_ARRAY1_DDR = 0x00;
    init_digital_keypad();
}

void main(void) {
    unsigned char key;
    unsigned long int delay ;   
    init_config();
    while (1) {
        key = read_digital_keypad(LEVEL);
        if( key == SW1)
        {
            LED1 = !LED1;
            for( delay=100000;delay--;); 
        }
    }
    return;
}
