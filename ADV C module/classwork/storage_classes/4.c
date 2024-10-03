#include<stdio.h>
int *foo()
{
    int i=10;      //i is a local var
    int *j=&i;     //j is ptr holding address of i
    return &i;      //compiler knows its returning the address of local variable
}                   //gives WARNING                  

int main()
{
    int *i;
    i=foo();       //  stack frame--destroyed,so ptr may be pointing to NULL ADDRESS
    printf("*i is %d\n",*i);   //dereferencing null is segmentation fault
    return 0;
}











