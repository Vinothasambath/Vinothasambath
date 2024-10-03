/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:multiplication of 2 numbers without using *
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation*/

#include<stdio.h>
 int main()
{
    int num1,num2,i,mul=0;
    printf("ENTER THE 2 NUMBERS\n");
    scanf("%d %d",&num1,&num2);

    for(i=0;i<num1;i++)
    {
        mul=mul+num2;
    }
    printf(" %d X %d = %d\n ",num1,num2,mul);
    return 0;
}

