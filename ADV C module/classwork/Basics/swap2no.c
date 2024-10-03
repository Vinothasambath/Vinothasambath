/*Documentation
NAME:Vinotha sambath
DATE:4.1.2023
DESCRIPTION:program to swap 2 numbers(pass by ref)
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

void func_swap( int *, int * );

int main()
{
    int num1,num2;
    printf("ENTER 2 NUMBERS ");
    scanf("%d %d", &num1 ,&num2);
    printf("NUMBERS BEFORE SWAPPING : %d %d \n ", num1 ,num2);

    func_swap( &num1 , &num2 );
    printf("NUMBERS AFTER SWAPPING : %d %d \n ", num1 ,num2);
     return 0;
}

void func_swap( int *ptr1 , int *ptr2 )
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

