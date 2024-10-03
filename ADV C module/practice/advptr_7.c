#include <stdio.h>
int main()
{
    int a[][3] = {10, 20, 30, 40, 50, 60};
    int (*ptr)[3] = a;
    printf("%d %d\n",*ptr[0],*ptr[1]);       // 10 40 1D array is taken --> deref rows base address
    
    
    printf("%d %d\n", (*ptr)[1], (*ptr)[2]);    // 20 30  particular
    ++ptr;   //ptr moved to next 1d array

    printf("%d %d\n", (*ptr)[1], (*ptr)[2]);   //50 60

    return 0;
}


