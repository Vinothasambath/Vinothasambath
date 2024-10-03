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
    int size, i, sum=0;
    printf("ENTER THE ARRAY SIZE ");
    scanf("%d", &size);
    
    int arr[size];

    printf("ENTER THE ARRAY ELEMENTS\n");
    for( i=0 ; i<size ; i++ )
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("AVERAGE OF ELEMENTS ARE %f\n",(float)sum/size);
    return 0;
}

