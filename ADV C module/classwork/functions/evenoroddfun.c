/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:to find a number is odd or even using function
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>

int oddoreven(int);

int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    //result=oddoreven(num);
    if( oddoreven(num)  )
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
  
int oddoreven( int n )
{
    /*
    if ( n%2 == 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
    */
    return (n%2 ==0);
}
