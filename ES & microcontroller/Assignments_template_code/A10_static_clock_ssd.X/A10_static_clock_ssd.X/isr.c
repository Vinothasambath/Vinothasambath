#include<xc.h>
#include"main.h"
#include "ssd.h"
void __interrupt() isr(void)
{
    static unsigned long int count=0;
    
    if(TMR2IF)    //intf will become 1 on triggering interrupt by overflow of timer2
    {
        TMR2IF=0;   //reset interrupt flag
        ++count;
	   //Implement your logic here       
    }
}
