#include <stdio.h>

int add(int num1, int num2)
{

    return num1 + num2;
}
int main()
{

    printf("%p\n", add);           //name of fun represents its address
    printf("%p\n", &add);          //same
    printf("SIZEOF add is :%zu\n", sizeof(add));//sizeof func id 1 in gcc extension
    return 0;
}
