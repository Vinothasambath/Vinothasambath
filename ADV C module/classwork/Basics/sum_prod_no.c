/*Documentation
NAME:Vinotha sambath
DATE:4.1.2023
DESCRIPTION:program to find the sum and product of 2 numbers(pass by ref)
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

void  sum_product( int *, int * );

int main()
{
    int num1, num2;
    printf("ENTER 2 NUMBERS ");
    scanf("%d %d", &num1 ,&num2);

    sum_product ( &num1 , &num2 );

    printf("the sum is: %d\n ", num1);
    printf("the product is %d\n", num2);
     return 0;
}

void  sum_product( int *ptr1 , int *ptr2 )
{
     int temp = *ptr1;
    *ptr1=(*ptr1 + *ptr2);
    *ptr2=*ptr2 * temp;
}

