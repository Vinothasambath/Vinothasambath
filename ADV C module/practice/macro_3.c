//parenthesis needed ,as the macro will be replaced at preprocessing time


#include<stdio.h>
#define SWAP(X, Y)  \
{                   \
    int temp=X;     \
    X=Y;            \
    Y=temp;         \
}

int main()
{
    int num1,num2;

    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    SWAP(num1, num2);
    printf("NUmbers after swapping  %d %d\n",num1,num2);

    SWAP(num1,num2);
    printf("Again swapping %d %d\n",num1,num2);
    return 0;
}

     

