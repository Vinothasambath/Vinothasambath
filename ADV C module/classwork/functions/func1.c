/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:fuction example
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include <stdio.h>

int add_numbers(int , int );                          //function prototype

int main()                                           //main function

   {    
       int num1 = 10, num2 = 20;        
       int sum = 0;
       sum = add_numbers(num1, num2);            //FUNCTION CALL WITH ACTUAL ARGUMENTS
       printf("Sum is %d\n", sum);
       return 0;
   }

int add_numbers(int num1, int num2)            //FUNCTION DEFINITION WITH FORMAL ARGUMENTS    //int is the return type

   {
        int sum = 0;
        sum = num1 + num2;
        return sum;
   }

