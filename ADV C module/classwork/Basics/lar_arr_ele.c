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
    int size,large, i;
    printf("Enter the array size ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements\n");
    for( i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
        if ( i==0 )
        {
           large=arr[0];
        }
        if( arr[i] > large )
        {
            large=arr[i];
        }
    }
    printf("the largest element in array is %d\n", large);
    return 0;
}
