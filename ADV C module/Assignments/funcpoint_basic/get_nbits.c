/*Documentation
NAME:Vinotha sambath
DATE:3.1.2023
DESCRIPTION:program to get 'n' bits of a given number
SAMPLE INPUT:
Enter the number: 10
Enter number of bits: 3
SAMPLE OUTPUT:Result = 2
 */

#include<stdio.h>

int get_nbits(int, int);                          //Fuction get_nbits prototype

int main()                                        //main function
{
    int num, n, res = 0;                          //initializing and declaring variables

    printf("Enter num and n:");                   //reading inputs from user
    scanf("%d%d", &num, &n);                      //num=number ,n= number of bits from lsb to be taken 

    res = get_nbits(num, n);                      //function call num, n as inputs

    printf("Result = %d\n", res);                    
}

int get_nbits(int num , int n )                  //function definition with parameters
{
   return (num & (1<<n)-1);                      //returning the value after doing the bitwise AND with 1 leftshifted to n times -1
    
}
