#include <stdio.h>
int main()
{
    int num,i,power,N;
    int series=1;

    printf("ENTER THE NUMBER OF SERIES YOU WANT TO SEE ");
    scanf("%d",&num);
    printf("ENTER THE N(BASE) value ");
    scanf("%d" ,&N);
    printf("THE VALUE OF\n ");
    for(i=0;i<num;i++)
    {
        series=N*series;
        power=i+1;
        printf("%d^%d = %d\n",N, power, series);
    }
return 0;
}


