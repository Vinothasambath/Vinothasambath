/*Documentation
NAME:Vinotha sambath
DATE:12.1.2023
DESCRIPTION:program to to generate fibbonacci numbers using recursion
SAMPLE INPUT:
Enter a number: 8
SAMPLE OUTPUT:
0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

void positive_fibonacci(int, int, int, int);                      //function prototype

int main()
{
    int limit;                                          

    printf("Enter the limit : ");                                 
    scanf("%d", &limit);

    positive_fibonacci(limit, 0, 1, 0);                             //function call
}

void positive_fibonacci( int num , int first ,int second, int next ) 
{
    if ( next <= num )                                            //base condition for recursion
    {
        printf("%d, ",next);                          
        first=second;
        second=next;
        next=first+second;
        positive_fibonacci(num ,first,second,next);               //recursively calling itself
    }
    else if( num < 0 ) 
    {
        printf("Invalid input\n");                               //if num is negative
    }
}

