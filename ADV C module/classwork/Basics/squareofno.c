/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>

int square( int x )
{
    int y=x*x;

    return y;
}

int main()
{
    int num;
    printf("Enter the number to find the square: ");
    scanf("%d", &num);
    
    printf("the square of a %d is %d\n",num ,square(num));
    return 0;
}

