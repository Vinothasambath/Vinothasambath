/*Documentation
NAME:Vinotha sambath
DATE:14.12.2022
DESCRIPTION:generation of positive Fibonacci numbers till the given number
SAMPLE INPUT:Enter a number: 8
SAMPLE OUTPUT:0 1 1 2 3 5 8
Documentation*/

#include<stdio.h>
int main()
{
    int num, first=0, second=1, next=0 ;   //declaring and initializing variables
    printf("Enter a number:");        
    scanf("%d",&num);                      //reading user's input
    if ( num >= 0 )                        //if num is greater than or equal to 0 
    {
 
    while ( next <= num )                 //loop will run till the value of series is lessthan or equal to
       {
        printf("%d ",next);              //printing next value ie)series of fibanocci positive numbers
        first=second;                    //assigning first value to second
        second=next;                     //assigning second to first
        next=first+second;               //next value is the addition of 2 previous values
     
       }
    }
    else
    {
        printf("invalid input\n");       //if the value is negative 
    }
    return 0;
}
