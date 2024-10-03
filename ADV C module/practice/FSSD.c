//2D ARRAY CREATION METHOD -->first static second dynamic

//differnt column values taken in an col array arr

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row, i, j;
    
    printf("ENTER THE NO OF ROWS:");
    scanf("%d",&row);

    int *ptr[row];       //mem alloc decided by compiler for rows  ,ARRAY OF POINTERS    //STACK
   
    int col_arr[row];
    printf("ENTER %d column values to store in array ",row);
    for( i=0; i<row; i++ )
    {
        scanf("%d",&col_arr[i]);         //different column values are taken in an array   
    }
 


    for( i=0; i<row; i++ )
    {
        ptr[i]=(malloc(col_arr[i]*sizeof(int)));    //memory allocation using dynamic allocation--->HEAP
                                                   //each row has diff column values based on col array
        printf("Enter the %d values: ",col_arr[i]);
        for( j=0; j<col_arr[i]; j++ )
        {
            scanf("%d",&ptr[i][j]);   //READING
        }
    }
    
    for( i=0; i<row; i++ )
    {
        for( j=0; j<col_arr[i]; j++ )
        {
            printf("%d  ",ptr[i][j]);    //PRINTING
        }
        printf("\n");
    }
    
    for( i=0; i<row ; i++ )
        printf("%p\n",ptr+i);         //cant do ptr++ ,cause its an array 

    return 0;
}


