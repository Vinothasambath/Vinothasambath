//LOCAL VARIABLES -auto(stored in stack seg)

#include<stdio.h>

//global space


int main()
{

    int i;           //auto by default
    int i;           //multiple declaration & redefinition  ends up in error
    int i=0;         //local variable --no linkage

    printf("i value is %d",i); //if not defined or read prints garbage value
    return 0;
}









