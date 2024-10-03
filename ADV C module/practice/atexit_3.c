//atexit()

#include<stdio.h>
#include<stdlib.h>

void foo(void)
{
    printf("UNIVERSE\n");
}
void fun(void)
{
    exit(1);
    printf("HI\n");
}
int main()
{
    atexit(foo);                //more than 1 atexit fun can be registed
    atexit(fun);                //last registered will be executed first
    
    int a=10;
    printf("%d\n",a);
    printf("HELLO\n");
    return 0;
}
