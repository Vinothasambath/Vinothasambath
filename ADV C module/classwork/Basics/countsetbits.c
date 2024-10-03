/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:to count the set bits
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

int main()
{
    int num, i, count=0;
    printf("enter the number ");
    scanf("%d", &num);

    for (i=0 ; i<=31 ; i++)
    {
        if( num & 1<<(31-i) )
        {
        
            count+=1;
        }
    }
    printf("the setbits count is %d\n",count);
    return 0;
}

