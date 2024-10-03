/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:2 array elements are equal or not
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>
int main()
{
    int size, i, j ,flag=0 ;
    printf("Enter the array size ");
    scanf("%d", &size);

    int arr1[size],arr2[size];
    
    //ARRAY 1
    printf("Enter array1 elements\n");
    for( i=0 ; i<size ; i++ )
    {
        scanf("%d", &arr1[i]);
    }
    
    //ARRAY2
    printf("Enter array2 elements\n");

    for( j=0 ; j<size ; j++ )
    {
        scanf("%d", &arr2[j]);
    }



    for( i=0 ; i<size ; i++)
    {
        for ( j=0 ; j<size ; j++)
        {
            if( arr1[i] == arr2[j] )
            {
                flag++;
            }
        }
    }
    if ( flag == size )
    {
        printf("The array elements are EQUAL\n");
    }
    else
    {
        printf("The array elements are NOT EQUAL\n");
    }
    return 0;
}


