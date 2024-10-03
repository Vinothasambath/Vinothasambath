/*Documentation
NAME:Vinotha sambath
DATE:29.12.2022
DESCRIPTION:program to find the median of two unsorted arrays

SAMPLE INPUT:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

SAMPLE OUTPUT:
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5
 */
#include<stdio.h>

int main()
{
    int N, M, i, j, temp;
    float  median1, median2;

    printf("Enter the 'n' value for Array A:");                     //reading array1 size
    scanf("%d", &N);
    
    printf("Enter the 'n' value for Array B:");
    scanf("%d", &M);                                                //reading array2 size
    
    int arrA[N], arrB[M];                                           //declarring 2 arrays arrA and arrB

    printf("Enter the elements one by Array A:");                 
        for ( i=0 ; i<N ; i++)
        {
            scanf("%d",&arrA[i]);                                   //reading arrA elements
        }

        for (i=0 ; i<(N-1) ; i++ )                                  //sorting elements in ascending order
        {
            for ( j=(i+1) ; j<N ; j++ )
            {
                if( arrA[i] > arrA[j] )
                {
                    temp=arrA[i];
                    arrA[i]=arrA[j];
                    arrA[j]=temp;
                }
            }
        }

    printf("Enter the elements one by Array B:");                  
        for ( j=0 ; j<M ; j++)
        {
            scanf("%d",&arrB[j]);                                   //reading arrB elements
        }

       
        for (i=0 ; i<(M-1) ; i++ )                                  //sorting elements in ascending order
        {
            for ( j=(i+1) ; j<M ; j++ )
            {
                if( arrB[i] > arrB[j] )
                {
                    temp=arrB[i];
                    arrB[i]=arrB[j];
                    arrB[j]=temp;
                }
            }
        }


        if ( N%2 == 0 )                                            //checking if arrA size is even or odd
        {
            median1=((float)(arrA[N/2]+arrA[(N-1)/2])/2);         //even then middle 2 elements are taken and their avg is saved as median
            printf("Median of array1 :%g\n",median1);
        }
        else
        {
            median1=arrA[N/2];                                     //odd then middle array element is taken as median
            printf("Median of array1 :%g\n",median1);
        }

        if ( M%2 == 0 )
        {
            median2=((float)(arrB[M/2]+arrB[(M-1)/2])/2);         //similarly for arrB also median is calculated
            printf("Median of array2 :%g\n",median2);
        }
        else
        {
            median2=arrB[M/2];
            printf("Median of array2 :%g\n",median2);
        }

         printf("Median of both arrays :%g\n",(median1+median2)/2);    //average of median is displayed
           
         return 0;
          
    }

