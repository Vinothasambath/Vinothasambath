#include <stdio.h>
int main()
{
    int num,i,power;
    int series=1;

    printf("ENTER THE NUMBER ");
    scanf("%d",&num);
    printf("THE VALUE OF\n ");
    for(i=0;i<num;i++)
    {
        series=2*series;
        power=i+1;
        printf("2^%d = %d\n", power, series);
    }
return 0;
}


