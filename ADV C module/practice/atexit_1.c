//atexit()

#include<stdio.h>
#include<stdlib.h>

void foo(void)
{
    printf("UNIVERSE\n");
    exit(0);                   //function and program is terminated
    printf("GALAXY");
}

int main()
{
    int a=10;
    printf("%d\n",a);
    atexit(foo);                         //it will be kept ready ,invoked when program is terminated normally
    printf("HELLO\n");
    return 0;
}
