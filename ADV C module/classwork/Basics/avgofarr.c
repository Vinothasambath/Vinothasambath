/*Documentation
NAME:Vinotha sambath
DATE:5.1.2023
DESCRIPTION:program to find the average of array elements
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>
int arr_ele_average( int *ptr, int size )
{     
     int sum=0;
     for( int i=0; i<size; i++ )
     {  
         sum=(*ptr++)+sum;
     }
     return (float)sum/size;
}
int main()
{
    int size, avg;
    printf("Enter the array size");
    scanf("%d", &size );

    int arr[size];
    printf("Enter the array elements\n");
    for( int i=0; i<size; i++ )
    {
        scanf("%d",&arr[i]);
    }

    avg=arr_ele_average(arr,size);
    printf("The Average of array elements is :%d\n",avg);
     return 0;
}


