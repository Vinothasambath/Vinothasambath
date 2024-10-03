/*Documentation
NAME:Vinotha sambath
DATE:15.12.2022
DESCRIPTION: generation of  negative Fibonacci numbers
SAMPLE INPUT:Enter a number: -8
SAMPLE OUTPUT:0 1 -1 2 -3 5 -8  
Documentation*/

#include<stdio.h>
int main()
{
    int num, first=0, second=1, next=0 ;         //initializing and declaring variables 
    printf("Enter a number:");                   
    scanf("%d",&num);
    if ( num <= 0 )                              //when num is negative
    {

       while( (next >= num) && (-next >= num) )  //loop runs till both positive and negative num is greater and equal to given number
       {         
     
        printf("%d ",next);                      //prints next 
        first=second;                            //assigning second value to first
        second=next;                             //assigning next value to second
        next=first-second;                       //next number is find by subtracting 2 previous numbers
       }
       
    }
    else
    {                                            //error when  the input is positive/greater than 1
        printf("invalid input\n");
    }
    return 0;
}
