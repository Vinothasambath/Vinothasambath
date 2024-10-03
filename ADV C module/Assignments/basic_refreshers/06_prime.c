/*Documentation
NAME:Vinotha sambath
DATE:28.12.2022
DESCRIPTION:program to print all primes using Sieve of Eratosthenes method

SAMPLE INPUT:
Enter the value of 'n' : 20
SAMPLE OUTPUT:
The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
 */

#include<stdio.h>

int main()
{
    int num, i, j ;                                 //declaring variables as integer datatype
    printf("Enter the value of 'n':");
    scanf("%d", &num);                              //reading i/p from user

    if ( num > 1 )                                   //condition to check if num > 1
    {
        int array[num-1];                            //declarring an array named array with size of num-1

        for ( i=0 ; i<(num-1) ; i++ )                //loop for storing elements in resp array index
        { 
            array[i]=i+2;
        }

        for ( i=2 ; (i*i)<num ; i++ )                //loop for erostothenes method 
        {
            for ( j=i ; j<(num-1) ; j++ )            //loop to check prime number
            {
                if( array[j]%i == 0 )                //if the num is not prime
                {
                    array[j]=0;                      //make array element as 0
                }
            }
        }
        printf("The primes less than or equal to %d are : ",num);
        for ( i=0 ; i<(num-1) ; i++ )
        {
            if (array[i] != 0)                      //printing array elements that are not zero
            {
                printf("%d, ", array[i]);
                
            }
        }
         
            printf("\n");
    }
    else
    {
        printf("Please enter a positive number which is > 1\n");
    }
    return 0;
}
