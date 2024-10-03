/*Documentation
NAME:Vinotha sambath
DATE:5.1.2023
DESCRIPTION:to square each element of array which has 5 elements
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>

int square_of_elements( int * ,int );
int main()
{
     int arr[5],num,i;
     printf("Enter 5 array elements: ");
     for( i=0; i<5; i++)
     {
         scanf("%d",&arr[i]);
     }
      
     square_of_elements( arr , 5 );
     
     printf("The array elements after squaring ");
     for( i=0; i<5; i++)
     {
         printf("%d ",arr[i]);
     }
 return 0;
}
 
int square_of_elements( int ptr[], int size)
{
    for ( int i=0; i<size ; i++ )
    {
        *ptr=*ptr * *ptr;
        ptr++;
    }
}   

