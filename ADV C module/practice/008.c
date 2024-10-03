#include<stdio.h>

int main()
{
    unsigned short x;
    unsigned char y=0x81,z=0x18;
    x=(z<<8)|y;                      //note here char is typecasted to short ,hence the bits are stored in 2 byres
    printf("x value is %#x\n",x);
}
