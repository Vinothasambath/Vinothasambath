//atexit()

#include<stdio.h>
#include<stdlib.h>

void foo(void)
{
    printf("UNIVERSE\n");
    printf("GALAXY\n");
}
void fun()
{
    printf("HI\n");
    //exit(1);
}
int main()
{
    atexit(foo);                         //it will be kept ready ,invoked when program is terminated normally
    
    int a=10;
    printf("%d\n",a);
    fun();
    printf("HELLO\n");
    return 0;
}
