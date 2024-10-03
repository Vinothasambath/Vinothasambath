/*
 * File:   main.c
 */


#include <xc.h>
#include "main.h"
#include "adc.h"
#pragma config WDTE = OFF      // Watchdog Timer ~Enable bit (WDT ~enabled)

#define PERIOD  100            //set max limit

void glow_led(unsigned short adc_reg_val)
{
	static unsigned char duty_cycle = 0;
	static unsigned wait = 0;
	static unsigned char loop_counter;


	if (wait--)
	{
		wait = 200;

		//update duty_cycle based on adc_reg_val   

	}

	if (loop_counter <= duty_cycle)
	{
		//on condition
	}

	else
	{
		//off condition
	}

	if (loop_counter == PERIOD)
	{
		//if max limit is reached
	}

	loop_counter++;

}

static void init_config(void) {
	LED_ARRAY1 = OFF;
	LED_ARRAY1_DDR = 0x00;         //cpnfiguration

	init_adc();
}

void main(void) {
	unsigned short adc_reg_val;
	init_config();

	while (1) 
	{
		adc_reg_val = read_adc();    //read the adc_reg value 
		glow_led(adc_reg_val);
	}
	return;
}
