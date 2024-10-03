/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:to find the middle number
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

int main()
{
    int num1, num2, num3 ;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1,&num2,&num3);

    if( (num2<num3 && num2>num1) || (num2<num1 && num2>num3) )
    {
        printf("the middle number is %d\n", num2);
    }
    else if( (num1<num2 && num1>num3) || (num1>num2 && num1<num3) )
    {
      printf("the middle number is %d\n ", num1);

    }
    else if( (num3>num1 && num3<num2) || (num3>num2 && num3<num1) ) 
    {
        printf("The middle number is %d\n", num3);
    }
    return 0;
}

    
