#include<stdio.h>

int main()
{
    int array[2][3]={10,20,30,40,50,60};
    int i,j;
    int (*arr)[3]=array;               //2d arrays always should be given to pointer to array

    for( i=0; i<2 ; i++ ) 
    {
        for( j=0 ; j<3 ; j++ )
        {
            printf("%d ",arr[i][j]); //*(*arr+i)+j)) or *(arr[i]+j) or (*(arr+i))[j]
        }
        printf("\n");
    }
    return 0;
}

