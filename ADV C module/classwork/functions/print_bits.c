/*Documentation
NAME:Vinotha sambath
DATE:6.1.2023
DESCRIPTION:to print n bits from lsb of a number
SAMPLE INPUT:
Enter the number: 10
Enter number of bits: 12
SAMPLE OUTPUT:
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 

 */

#include <stdio.h>

int print_bits(int, int);              //Func prototype

int main()
{
    int num, n;                    
    
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Enter no of bits:");
    scanf("%d", &n);

    if ( n > 32 )                               //checking if n is greater than 32 bits
    {
        n=sizeof(num);
    }
    printf("Binary form of %d:", num);
    print_bits(num, n);                        //function call
 }

int print_bits( int num , int n )
{
    for ( int i=n-1 ; i>=0 ; i-- )             //loop runs no of bits times
    {
        if ( num & (1<<i) )                    //if the condition returns a non zero value    
        {
            printf("1 ");                       //if(nonzero)=TRUE ,prints 1
        }
        else
        {
            printf("0 ");                      //if(0)=FALSE ,prints 0
        }
    }
}
