/*Documentation
NAME:Vinotha sambath
DATE:20.12.2022
DESCRIPTION:WAP to check N th bit is set or not, If yes, clear the M th bit

SAMPLE INPUT:
Enter the number: 19
Enter 'N': 1
Enter 'M': 4

SAMPLE OUTPUT:Updated value of num is 3 
 */

#include<stdio.h>

int main()
{
    int num, set_bit, clear_bit;                   //declaring variables as int
    printf("Enter the number: ");          
    scanf("%d", &num);                             //reading num from user

    printf("Enter 'N': ");
    scanf("%d", &set_bit);                         //reading setbit  position from user

    printf("Enter 'M': ");                       
    scanf("%d", &clear_bit);                       //reading bit position to be cleared

    if ( num & (1<<set_bit))                       //true if num BITWISE AND with 1 (leftshited to set_bit times) 
         {
             num=num & ~(1<<clear_bit);            //if setbit is 1 ,clearing/making the bit as zero 
                                                   //with num& complement of 1 leftshifted to clear_bit times
         }
   printf("Updated value of num is %d\n",num);    //saving the value back to num and displaying

    return 0;
}

