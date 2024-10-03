/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:printing the bits
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
int main()
{
    int num , i;
    printf("Enter the number to print bits ");
    scanf("%d", &num);

    for( i=0 ; i<=31 ; i++ )
    {
        if(num & 1<<(31-i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }

    }
    printf("\n");
    return 0 ;
}

