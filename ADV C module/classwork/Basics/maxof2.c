/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:maximum of 2 numbers
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation*/

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("ENTER 2 NUMBERS: ");
    scanf("%d\n %d",&num1,&num2);
    if ( num1 > num2 )
    {
        printf("%d is maximum\n ",num1);
    }
    else
    {
        printf("%d is maximum\n ",num2);
    }
    return 0;
}
