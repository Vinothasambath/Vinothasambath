/*Documentation
NAME:Vinotha sambath
DATE:14.1.2023
DESCRIPTION: Printing the values in sorted order without modifying or copying array
SAMPLE INPUT:
Enter the size : 7
Enter 7 elements 
1 3 2 5 4 7 6
SAMPLE OUTPUT:
After sorting: 1 2 3 4 5 6 7
Original array values 1 3 2 5 4 7 6
 */

#include <stdio.h>

void print_sort(int [], int);                   //function prototype

int main()
{
    int size, iter;                             
    
    printf("Enter the size of the array : ");    //reading array size
    scanf("%d", &size);
    
    int arr[size];                              
    
    printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);                 //reading array elements
    }
    
    print_sort(arr, size);                       //function call

    printf("Original array values ");
    
    for (iter = 0; iter < size; iter++)
    {
        printf("%d ", arr[iter]);                //printing original array elements
    }
    printf("\n");
    return 0;
}


void print_sort( int *ptr, int size )           //function definition
{
    int i,large,small,sec_small;

    large= ptr[0];
    small=ptr[0];
    printf("After sorting:");

    for( i=1 ; i<size ; i++ )                   //finding small and large
    {
        if ( ptr[i] > large )
        {
            large= ptr[i]; 
        }
        if ( ptr[i] < small )
        {
            small = ptr[i];
        }
      }

      printf("%d ", small);                     //printing small element of array          
   
       sec_small=large;                         //assigning second small =large value

       for ( int j=1 ; j<size ; j++ )           //running the loop till size 
       {
       for ( i=0 ;i<size ; i++ )                //finding second small
       {
         if ( ptr[i]> small && ptr[i] < sec_small )     
         {
             sec_small=ptr[i];                 
         }

       }
       printf("%d ",sec_small);               //printing second small

       small=sec_small;                       //assigning small=second small,second small = large and loop continues
       sec_small=large;
       } 
       printf("\n");
}

