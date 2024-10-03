/*Documentation
NAME:Vinotha sambath
DATE:11.2.2023
DESCRIPTION:find the product of given matrix.
SAMPLE INPUT:
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3
SAMPLE OUTPUT:
Product of two matrix :
14      14      14
14      14      14
14      14      14
 */

#include <stdio.h>
#include <stdlib.h>

int matrix_mul(int **, int, int, int **, int, int, int **, int, int);


int main()
{
    int **mat_A, **mat_B, **result;
    int row_A,col_A ,row_B,col_B ,row_result,col_result,i,j,k;
    
    //MATRIX A
    
    printf("Enter number of rows : ");
    scanf("%d",&row_A);
    
    printf("Enter number of columns : ");
    scanf("%d",&col_A);

    printf("Enter values for %d x %d matrix : \n",row_A,col_A);

    mat_A=(int **)malloc(row_A * sizeof(int *));                      //allocating memory for matrixA using malloc for rows
    for ( i = 0; i < row_A; i++ )
    {  
        mat_A[i] =(int *) malloc(col_A * sizeof(int));                //for columns
    }
    for( i=0; i < row_A; i++ )
    {
        for( j=0; j < col_A; j++ )
        {
            scanf("%d",&mat_A[i][j]);                                  //reading values
        }
    }

    //MATRIX B
    
    printf("Enter number of rows : ");
    scanf("%d",&row_B);
    
    printf("Enter number of columns : ");
    scanf("%d",&col_B);
    
    if( col_B != row_A )                                        //if row1 != col2
    {
        printf("Matrix multiplication is not possible\n");      //matrix mul cant be done ,as they are uneven
        exit(0);
    }
    else
    {
        printf("Enter values for %d x %d matrix : \n",row_B,col_B);    //allocating matrixB  memory similar to matrixA
        mat_B=(int **)malloc(row_B * sizeof(int *));
           for ( i = 0; i < row_B; i++ )
           {  
               mat_B[i] =(int *) malloc(col_B * sizeof(int));
           }
           for( i=0; i < row_B; i++ )
           {
               for( j=0; j < col_B; j++ )
               {
                    scanf("%d",&mat_B[i][j]);
               }
            }
    }

    //RESULT MATRIX
    row_result=row_A;
    col_result=col_B;    

    result=(int**)malloc(row_result*sizeof(int*));
    for(i=0;i<col_result;i++)
    {
        result[i]=(int*)malloc(col_result*sizeof(int));
    }
    
    //FUNCTION CALL
    matrix_mul( mat_A, row_A, col_A,mat_B,row_B,col_B,result ,row_result,col_result );    
        return 0;
}


int matrix_mul(int **mat_A, int row_A, int col_A, int **mat_B, int row_B, int col_B, int **result, int row_result, int col_result)
{
   int i, j, k;
   for(i=0;i<row_A;i++)
   {
     for(j=0;j<col_B;j++)
     {
         result[i][j]=0;
         for(k=0;k<col_A;k++)
         {
             result[i][j]+= (mat_A[i][k]*mat_B[k][j]);   //multiplying the each elements  rowsA with colB values and adding     
         }
     }
   }

   printf("product of two matrix : \n");
   for(i=0;i<row_result;i++)
   {
     for(j=0;j<col_result;j++)
     {
         printf("%d\t",result[i][j]);                  //printing result matrix
     }
    printf("\n");
   }
}


