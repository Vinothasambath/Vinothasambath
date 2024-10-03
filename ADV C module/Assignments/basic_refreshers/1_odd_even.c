/*Documentation
NAME:Vinotha sambath
DATE:14.12.2022
DESCRIPTION:to check if number is odd or even with signs
SAMPLE INPUT:Enter the value of 'n' : -2
SAMPLE OUTPUT:-2 is negative even number
Documentation*/

#include<stdio.h>                                            //headerfile where printf and scanf functions are defined
int main()
{
    int n;                                                   //declaring n as integer 
    printf("Enter the value of 'n' : ");                    //print the message

    scanf("%d",&n);                                         //reads the input from user ,format specifier is %d for integer ,address of n

        if ( n == 0 )                                      //if number is equal to zero
        {    
            printf("%d is neither odd nor even\n",n);   
        }
       
        if ( n > 0 )                                      //condition to check if n greator than 0 ie)positive num
        {
            if ( n % 2 == 0)                              //nested if to check number is even or odd
            { 
                printf("%d is positive even number\n",n);
            }
            else
            {
                printf("%d is positive odd number\n",n);
            } 
        }        

        if ( n < 0 )                                     //condition to check if the number is negative
        {
            if ( n % 2 == 0 )                           
            {
            printf("%d is negative even number\n",n);   //similar to positive number even or odd is checked
            }
            else
            {
            printf("%d is negative odd number\n",n);
            }
        }

    return 0;
}
