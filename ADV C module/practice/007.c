#include<stdio.h>

int main()
{
    unsigned char i,cp,dp,data[]={0,1,2,3};

    for(i=0;i<4;i++)
    {
        dp=data[i];
        cp=(dp & 0xF0)|(1 << i);
        printf("%x, %x\n",dp,cp);
    }
}
