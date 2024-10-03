#include<stdio.h>
int *foo()
{
    int i=10;      //i is a local var
    int *j=&i;     //j is ptr holding address of i
    return j;      //compiler knows the pointer is holding an int but not aware that the address is of local variable
}                  //so it returns the address of j

int main()
{
    int *i;
    i=foo();       //i receives address of ptr j//once it returns the j stack frame--destroyed,bt ptr may still holding data
    printf("*i is %d\n",*i);   //no warning or error in this case
    return 0;
}











