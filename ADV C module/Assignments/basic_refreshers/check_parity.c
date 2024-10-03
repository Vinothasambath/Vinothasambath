/*Documentation
NAME:Vinotha sambath
DATE:20.12.2022
DESCRIPTION:program to count number of set bits in a given number and print parity

SAMPLE INPUT:Enter the number : 7

SAMPLE OUTPUT:
Number of set bits = 3
Bit parity is Odd
 */

#include<stdio.h>

int main()
{
    int num, i, set_bit=0;                

    printf("Enter the number :");
    scanf("%d", &num);

    for ( i=0 ; i <32 ; i++ )                        //loop runs for 32 times(no of bits for integer) 
    {
          if( num&(1<<i) )                           //cond  is true if number BIWISEAND with 1 (1 leftshited to i times for each iter) 
          {
           set_bit++;                                //increment Set_bit value if the BITWISEAND operation returns 1
          } 
    }
   printf("Number of set bits = %d\n",set_bit);      
    
   if ( set_bit & 1 )                                //if set_bit is BITWISE AND with 1 ,if LSB bit returns 1
   {
      printf("Bit parity is Odd\n");                 //condition true ,bit is odd
   }
   else
   {
      printf("Bit parity is Even\n");                //if LSB bit is 0 ,false ,bit is even
   }


return 0;
}

