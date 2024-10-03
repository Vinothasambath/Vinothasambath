/*Documentation
NAME:Vinotha sambath
DATE:15.12.2022
DESCRIPTION:program to check if number is perfect or not
SAMPLE INPUT:Enter a number: 6
SAMPLE OUTPUT:Yes, entered number is perfect number
Documentation*/

#include<stdio.h>

int main()
{
    int num, i, sum=0;                          //declaring and initializing variables
    
    printf("Enter a number:");                  
    scanf("%d" , &num);                        //reading a number from user
                                                
     if ( num > 0 )                           //checking if it is positive number
     {
        for ( i=1; i<=(num/2) ; i++ )         //loop will run num/2 times starting from 1 , incremented by 1 (excluding the input number) 
        {  
           if ( (num % i) == 0 )              //checks if (num/i) reminder =0
            {
               sum=sum+i;                     //if true then add it to variable sum 

            }
        }   
    
        if ( sum == num )                        //checks if sum equal to given number
        {   
        printf("Yes, entered number is perfect number\n");     //prints if true
        }
        else
        {
        printf("No, entered number is not a perfect number\n");  //prints if false
        }
     }
     else
     {
        printf("Error : Invalid Input, Enter only positive number\n");    //prints if number is num < 0
     }

    return 0;
}
