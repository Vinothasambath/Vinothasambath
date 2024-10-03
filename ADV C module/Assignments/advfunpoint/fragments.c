/*Documentation
NAME:Vinotha sambath
DATE:14.2.2023
DESCRIPTION:to implement fragments using Array of Pointers
SAMPLE INPUT:
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1
SAMPLE OUTPUT:
Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333
 */

#include <stdio.h>
#include<stdlib.h>

int fragments(int, float *[], int *);

int main()
{
    int row, i, j;
    float  sum=0;
    printf("Enter no.of rows: ");
    scanf("%d",&row);
    
    float *ptr[row];
    int arr[row];                        

    for( i=0; i<row ; i++ )                     
    {
        printf("Enter no of columns in row[%d] : ",i);              //array to store no of columns in each row
        scanf("%d",&arr[i]);
    }
    for( i=0; i<row; i++ )                                   
    { 
        sum=0;
       
        ptr[i]=(float *)malloc((arr[i]+1) *sizeof(float));         //allocating memory ,extra 4bytes allocated to store result
        printf("Enter %d values for row[%d]:",arr[i],i); 
      
        for( j=0; j<arr[i]; j++ )
        {
            scanf("%f",&ptr[i][j]);                               //reading values in respective index
            sum+=ptr[i][j];
        }
        ptr[i][j]=sum/arr[i];

    }
   

    printf("Before sorting output is:\n");
    for( i=0; i<row; i++ )                                   
    {
        for( j=0; j<arr[i]+1; j++ )
        {
                printf("%f ",ptr[i][j]);                          //printing values before sorting
        }
        printf("\n");
    }
   
    fragments( row, ptr, arr);                                    //func call

    printf("After sorting output is:\n");
    for( i=0; i<row; i++ )                                   
    {
        for( j=0; j<arr[i]+1; j++ )
        {
                printf("%f ",ptr[i][j]);                         //printing values before sorting
        }
        printf("\n");
    }
    return 0;
}

int fragments( int row , float *ptr[row] ,int *arr)
{
    int temp;
    for(int i=0; i<row-1; i++)                                //sorting based on avg value
    {
       for(int j=i+1; j<row; j++)
       {
            if(ptr[j][arr[j]] < ptr[i][arr[i]])  
            { 
                float *temp_ptr = ptr[i];                     // swap ptr[i] and ptr[j]
                ptr[i] = ptr[j];
                ptr[j] = temp_ptr;

                temp = arr[i];                               // swap arr[i] and arr[j]
                arr[i] = arr[j];
                arr[j] = temp;
           }
      }
    }
}


