/*Documentation
NAME:Vinotha sambath
DATE:16.12.2022
DESCRIPTION:print the numbers in X format
SAMPLE INPUT:Enter the number: 5
SAMPLE OUTPUT:
1   5
 2 4
  3
 2 4
1   5

 */

#include<stdio.h>                          

int main()
{
    int num, i, j;                                  //defining num i and j as integer
    printf("Enter the number:");
    scanf("%d",&num);                               //reading num from user
    
    for( i=1; i<=num; i++)                          //loop for (ROWS) num times till i <= num ,increments by 1 for every iteration
    {
    
        for ( j=1; j<=num; j++)                      //loop for (COLUMN) j num times till j<=num ,increments by 1 for every iteration
       {
     
           if( i == j || j == (num-i+1) )           //condition to print the pattern ,enters if block if any one of the condition is true
           {                                        //thus used logical OR operator
               printf("%d",j);                      //printf j value
           }
            else
            {
               printf(" ");                         //prints space if condiiton is false
            }
       }
          printf("\n");                             //moves to next line for next i value
      
    }
   return 0;
} 



