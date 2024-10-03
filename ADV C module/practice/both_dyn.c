//BOTH DYNAMIC USING DOUBLE POINTER
//mix of arrofptr + ptrtoarr

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **ptr;
    int row, col,i ,j;
    
    printf("Enter number of rows : ");
    scanf("%d",&row);
    
    printf("Enter number of columns : ");
    scanf("%d",&col);

    ptr=(int **)malloc(row * sizeof(int *));                      //allocating memory for rows using malloc ,rows holds addresses here
                                                                  //like array of ptrs  ,but its not array so ptr++ can be done
    for ( i = 0; i < row; i++ )
    {  
        ptr[i] =(int *) malloc(col * sizeof(int));                //alloc memory for each row --> col (like ptr to arry)
    }
    
    printf("ENTER VALUES: ");
    for( i=0; i < row; i++ )
    {
        for( j=0; j < col; j++ )
        {
            scanf("%d",&ptr[i][j]);                                  //reading values
        }
    }

    for( i=0; i < row; i++ )
    {
        for( j=0; j < col; j++ )
        {
            printf("%d  ",ptr[i][j]);
            printf("%p  ",&ptr[i][j]);            //printing values
        }
        printf("\n");
    }

    for(i=0; i<row ; i++ )
    { 
       // printf("%p\n",ptr++);   //can increment cause its a pointer to an pointer
        printf("%p\n",ptr[i]++);
    }
}
