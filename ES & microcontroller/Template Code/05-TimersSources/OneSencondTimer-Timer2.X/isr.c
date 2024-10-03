#include <xc.h>
#include "main.h"

void __interrupt() isr(void)
{
    static unsigned int count = 0;
    
    if (TMR2IF == 1)
    {
        if (++count == 6250)           //1250 for 1 sec , 625 for half sec, 6250 for 5 sec 
        {                              //used prescalar
            count = 0;
            
            LED1 = !LED1;
        }
        
        TMR2IF = 0;
    }
}