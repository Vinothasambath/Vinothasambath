//MACRO TO SWAP A NIBBLE


#include<stdio.h>

#define NIBBLE(NUM)   (NUM << 4) | (NUM >> 4)

int main()
{
    int num,new_num;

    printf("Enter a number ");
    scanf("%d",&num);
    printf("BITS BEFORE SWAPPING ");
    for( int i=7; i >= 0 ; i-- )
    {
        if ( num & (1 << i) )
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    printf("BITS AFTER SWAPPING: ");
    new_num=NIBBLE(num);
    for( int i=7; i >= 0 ; i-- )
    {
        if ( new_num & (1 << i) )
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}
