/*Documentation
NAME:Vinotha sambath
DATE:16.12.2022
DESCRIPTION:program to print triangle pattern
SAMPLE INPUT:Enter the number: 4
SAMPLE OUTPUT:
1 2 3 4
5   6
7 8
9                   
*/
#include<stdio.h>

int main()
{
    int num, i, j, count=1;                   //initializing and defining variables
    printf("Enter the number: ");
    scanf("%d", &num);                        //reading input from user

    for( i=1; i<=num; i++)                    //Rows--loop runs <=num time with i=0,i incremented for each iteration
    {
       for( j=1; j<=num; j++)                 //Column--similar to row
       { 
          if (i==1 || j ==1 ||  j == num-i+1 ) //enters if block if any one of the condition is true using logical OR
          {
              printf("%d ",count);             //prints count
              count++;                         //incr count
          }
          else
          {
              printf("  ");                    //prints space
          }
       }
       printf("\n");                           //goes to new line for next i value
    }
   return 0;
} 
