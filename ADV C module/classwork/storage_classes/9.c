//register example
//registers are small memory seg located closer to the cpu so that the data can be fetched faster

#include <stdio.h>

int main()
{
    register int i = 0;
    scanf("%d", &i);   //requesting the address of reg var is not possible   ,so error
    printf("i %d\n", i);
    return 0;
}



