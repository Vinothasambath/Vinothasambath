//2D ARRAY CREATION METHOD -->BOTH STATIC

#include<stdio.h>

int main()
{
    int row, col, i, j;
    
    printf("ENTER THE NO OF ROWS:");
    scanf("%d",&row);

    printf("ENTER THE NO OF COL:");
    scanf("%d",&col);
    
    int arr[row][col];       //mem alloc decided by compiler for both the rows and cols
    

    printf("ENTER %d values : ",(row*col));
    
    for( i=0; i<row; i++ )
    {
        for( j=0; j<col; j++ )
        {
            scanf("%d",&arr[i][j]);   //READING
        }
    }
    
    for( i=0; i<row; i++ )
    {
        for( j=0; j<col; j++ )
        {
            printf("%d  ",arr[i][j]);    //PRINTING
        }
        printf("\n");
    }
    return 0;
}


