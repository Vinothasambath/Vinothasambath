/*Documentation
NAME:Vinotha sambath
DATE:5.1.2023
DESCRIPTION:to find the sum of sequence of number(starting from 1) using recursive function
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

int sumof_seqof_num( int num );

int main()
{
    int n,result;
    printf("Enter the n value:");
    scanf("%d", &n);

    result=sumof_seqof_num(n);
    printf("The sum of sequence of %d numbers are :%d\n", n,result);
    return 0;
}

int sumof_seqof_num( int num )
{
        if ( num <= 1 )
        {
            return 1;
        }
        else 
        {
           return num + sumof_seqof_num(num-1);
        }

}
