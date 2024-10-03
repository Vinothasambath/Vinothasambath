#include<xc.h>

void init_timer2(void)
{
    //1:16 scaling
    T2CKPS0=1;
    T2CKPS1=1;
    //preload register
    PR2=250;
    //timer2 interrupt enable
    TMR2IE=1;
    TMR2ON=1;
}