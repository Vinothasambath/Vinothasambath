/*
 * File:   main.c
 */

#include <xc.h>
#include "ssd.h"
#include"main.h"
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled)

static void init_config(void) {
    //initialize ssd
    init_ssd();
    /* set Global Interrupt Enable bit , peripheral interrupt enable bit*/
    PEIE=1;
    GIE=1;
}

void main(void) {  
    
    init_config();
    //initialize display values on SSD
    //NOTE:to change these values,please change hour and minute variable in main.h file
    ssd[0] = digits[(hour / 10) % 10];
    ssd[1] = (digits[(hour / 1) % 10])|DOT;
    ssd[2] = digits[(minute / 10) % 10];
    ssd[3] = digits[(minute / 1) % 10];

//If u called display function here then it will print 12. 00
    //start timer2
    init_timer2();
//Whenever flag is getting 1 it will enter isr function
//Try to find after getting how many flags we need to increment count value

//Whenever your count variable is getting one minute try to change the hour and minute value inside isr function and reset the count value

//And please note down you have to change the ssd array value depends upon the hour and minute value


/*          You can change the ssd array values like this
            //load hour value to first two ssds
            ssd[0] = digits[(hour / 10) % 10];
            ssd[1] = digits[(hour / 1) % 10];
            //load minute value to last two ssds
            ssd[2] = digits[(minute / 10) % 10];
            ssd[3] = digits[(minute / 1) % 10];
*/


//And Please note down every half second it have to blink the dot in second ssd



    while (1) {
    // call ssd values display function
    display(ssd);
    }
    return;
}

