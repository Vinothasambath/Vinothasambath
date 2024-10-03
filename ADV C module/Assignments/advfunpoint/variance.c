/*Documentation
NAME:Vinotha sambath
DATE:2.2.2023
DESCRIPTION:Variance calculation with dynamic arrays
SAMPLE INPUT:
Enter the no.of elements : 10

Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
SAMPLE OUTPUT:
Variance is 40.000000
 */

#include <stdio.h>
#include<stdlib.h>

float variance(int *, int);

int main()
{
    int num;
    printf("Enter the no.of elements : ");
    scanf("%d",&num);

    int *arr=(int *)malloc(num*sizeof(int));
    int *ptr=arr;

    printf("Enter the %d elements:\n",num);

    for( int i=0 ; i < num ; i++ )                   //reading to the malloc array
    {
       printf("[%d] -> ",i);
       scanf("%d", &ptr[i]);
    }

    printf("Variance is %f\n",variance(arr , num));  //function call /return
    
    free(arr);             //freeeing malloc memory
    ptr=NULL;
    arr=NULL;              //dangling pointers to NULL Address
    
    return 0;
}

float variance ( int *array , int size )
{

    int i, sum=0 ;
    float mean;                             

    //AVERAGE or MEAN

    for ( i=0 ; i <size ; i++ )
    {
        sum=array[i]+sum;

    }

    mean=(float)sum/size;

    //DEVIATION

    for( i=0 ; i <size ; i++ )
    {
        array[i]=array[i]-mean;
    }
    
    //SIGMA or VARIANCE
    
    sum=0;
    for ( i=0 ;i <size ; i++ )
    {
        array[i]=array[i] * array[i];          
        sum=sum+array[i];
    }


    return (float)sum/size;                   //returning variance
}
   




