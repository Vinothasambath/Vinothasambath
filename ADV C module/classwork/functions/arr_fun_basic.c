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
    int arr[5]={ 1 , 2 , 3 , 4 , 5 };

    int *ptr=arr;

    for ( int i=0; i <5 ; i++ )
    {
        printf("arr[%d]=%d\n ",i , i[arr]);
          /*can also give 
            arr[i] 
            *(i+arr)
            *(arr+i)
            ptr[i]
            i[ptr]
            *(i+ptr)
            *(ptr+i)
            *ptr++
            cant give *arr+ because its like changing the base address itself */
        
    }
    return 0;
}

