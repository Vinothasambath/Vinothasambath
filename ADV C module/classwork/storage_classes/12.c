//STATIC examples


#include<stdio.h>

int *foo()
{
    static int i = 10;    // static variable i is stored in data seg 
    int *j = &i;          //j is a pointer holding addr of i ,only pointer variable might be destroyed ,but the address is already returned,while dererecing the data will still be present
    return j;             //if j is returned -->address of i is returned
}
int main()
{
    int *i;
    i = foo();

    printf("*i %d\n", *i);  //while dereferncing the address the data is still present as it is in code segment

    return 0;
}
