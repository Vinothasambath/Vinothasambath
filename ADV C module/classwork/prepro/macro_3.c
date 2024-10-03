//macro to find sum of 2 numbers

#include<stdio.h>

#define SUM(X, Y)   (X+Y)

int main()
{
    int num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);

    printf("The sum is %d\n",SUM(num1,num2));
    return 0;
}
