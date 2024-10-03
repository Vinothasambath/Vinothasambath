/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>

int main()
{
   int array[10] = {101, 66, 3, 4, 50, 69, 7, 8, 9, 0};
   int i, largest, second;

   if(array[0] > array[1])
   {
      largest = array[0];
      second  = array[1];
   }
   else 
   {
      largest = array[1];
      second  = array[0];
   }

   for( i= 2; i < 10; i++)
   {
      if( largest < array[i])
      {
         second = largest;
         largest = array[i];
      } 
      else if( second < array[i] )
      {
         second =  array[i];
      }
   }
   printf("largest , second largest %d %d\n",largest,second);
}
