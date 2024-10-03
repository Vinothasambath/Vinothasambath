#include<stdio.h>


int foo()
{
    int i=0;              //local var 
    printf("the i value is %d\n",i);//printing
    return 0;            //returning 0
}
int main()
{
    foo();           //calling func foo
    return 0;
}

