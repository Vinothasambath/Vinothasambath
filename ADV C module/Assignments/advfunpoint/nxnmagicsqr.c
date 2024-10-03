/*Documentation
NAME:Vinotha sambath
DATE:15.2.2023
DESCRIPTION: generate a n*n magic square
SAMPLE INPUT:Enter a number: 3
SAMPLE OUTPUT:
8      1      6
3      5      7
4      9      2
 */

#include <stdio.h>
#include<stdlib.h>

void magic_square(int **, int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);                                            //reading n 

    if( (n > 2) && (n%2 != 0) )                                //validating the number is >2 and odd
    {
      int **arr;                                              //initializing array with both dynamic method
      arr=(int **)calloc(n,sizeof(int*));
    
      for( int i=0 ;i<n ; i++)
      {
          arr[i]=(int *)calloc(n,sizeof(int));                //memory blocks are allocated using calloc with 0's in all memory
      }
      
      magic_square( arr,n );                                 //calling function

    }
    else
    {
        printf("Error : Please enter only positive odd numbers\n");
    }
    return 0;
}

void magic_square( int **ptr ,int n )
{
    int i,j,k;
    int row=0 ,col=n/2;                                   //row=0,col=n/2 ,finding the middle col of 0th row

    for( i=1; i<=(n*n); i++ )
    {
        ptr[row][col]=i;                                 //writing/assigning values to respective field

        j=row--;                                         //move the row up ,col to right
        k=col++;
        
        if( row < 0 )                                    //if row value is < 0
        {
            row=n-1;                                      
        }
        if( col == n )                                   //if col value is >n-1 or == n
        {
            col=0;
        }
        if( ptr[row][col] != 0 )                         //if the feild is already filled with value
        {
          row=j+1;                                       //go back to prev pos ,move down the row ,
          col=k;
          
        }
    }

    for( i=0; i<n; i++ )
    {
        for( j=0; j<n; j++ )
        {
            printf("%d  ",ptr[i][j]);                    //printing 2d array
        }
        printf("\n");
    }
}


 
