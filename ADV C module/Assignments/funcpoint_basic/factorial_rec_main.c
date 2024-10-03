/*Documentation
NAME:Vinotha sambath
DATE:14.1.2023
DESCRIPTION:factorial of given number using recursion
SAMPLE INPUT:Enter the value of N : 5
SAMPLE OUTPUT:Factorial of the given number is 120
 */

#include <stdio.h>

int main()
{
    static int num,count=0;                                //static variables are used , the values gets updated after every func call
    static unsigned long long int fact = 1;
    
    if ( count == 0 )                                     //checking count == 0 and incrementing after reading inputs
    {
        printf("Enter the value of 'N' : ");
        scanf("%d", &num );
        count++;
    }
    
    if ( num < 0 ) 
    {
        printf("Invalid input\n");                       //if input is negative integer
    }
    
    else if ( num == 0 )                                 //base condition
    {
      printf("Factorial of the given number is %lld\n", fact);
    }
    else                                                 //else call the main after fact expression
    {
     fact= fact * num--;
     main();
    }
    return 0;
}
