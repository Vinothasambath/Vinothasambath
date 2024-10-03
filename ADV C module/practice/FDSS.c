//2D ARRAY CREATION METHOD -->first Dynamic Seconf static
//row-->dynamic,col-->static

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,col, i, j;
    
    printf("ENTER THE NO OF rows:");
    scanf("%d",&row);
    printf("ENTER THE NO OF COL:");
    scanf("%d",&col);

    int (*ptr)[col];       //mem alloc decided by compiler for columns  ,POINTER TO ARRAY    //STACK
   
    
    ptr=malloc(row*sizeof(*ptr));        //memory allocation using dynamic allocation for rows--->HEAP -->single block   
    
                                          //*ptr is one complete 1D ARRAY, can use sizeof(*ptr)/ sizeof(int [col]) / col*sizeof(int)
    printf("ENTER %d VALUES: ",(row*col));
    for(i=0 ; i<row ; i++ )
    {   
        for( j=0; j<col; j++ )
        {
            scanf("%d",&ptr[i][j]);   //READING
        }
    }
    
    for( i=0; i<row; i++ )
    {
        for( j=0; j<col; j++ )
        {
            printf("%d  ",ptr[i][j]);    //PRINTING
        }
        printf("\n");
    }
    
    for(i=0 ; i <row ; i++ )
    printf("incrementing %p\n",ptr++);  //incrementing pointer gives next 1D array
    
    return 0;
}


