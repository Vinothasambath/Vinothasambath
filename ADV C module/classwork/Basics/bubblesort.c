/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:bubble sort
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
int main()
{
    int size, i ,j, temp;
    printf("Enter the array size ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the array elements ");
    //READING
    for( i=0 ; i<size ; i++ )
    {
        scanf("%d", &arr[i]);
    }
    //SORTING
    for ( i=0 ; i<(size-1) ; i++ )                   //starts from 1st value compares till last before value by incrementing i
    {
        for ( j=(i+1) ; j<size ; j++ )               //starts from 2nd value
        {
            if ( arr[i] > arr[j] )                  //ascending order
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //PRINTING
    printf("The sorted elements are \n" );
    for( i=0 ; i<size; i++ )
    { 
        printf("%d ",arr[i]);
    }
    return 0;
}

