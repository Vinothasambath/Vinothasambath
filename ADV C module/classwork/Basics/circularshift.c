/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:circular rotation
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
int main()
{
    int size, i , temp;
    char option;

    printf("Enter the array size ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the array elements ");
    //READING
    for( i=0 ; i<size ; i++ )
    {
        scanf("%d", &arr[i]);
    }
    
    //circular rotation
    
    do
    {
    temp=arr[0];                            //save first value in a temp variable
    for(i=0 ; i<(size-1) ; i++ )            //change the index of remaining elements
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;                            //storing temp in last index

    //PRINTING
    printf("The shifted array elements are \n" );
    for( i=0 ; i<size; i++ )
    { 
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Do you want to continue(y/n)\n");
    getchar();
    scanf("%c", &option);
    
    }while( option == 'y');
    return 0;
}

