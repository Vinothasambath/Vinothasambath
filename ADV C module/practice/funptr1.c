#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}
int main()
{

    int *fptr;               //int pointer used ,warning given
    fptr = add;        

    printf("%p\n", add);    //both add, fptr has same address
    printf("%p\n", fptr);
    printf("%p\n", &fptr);  //address of pointer
    
    //if *fptr is printed ie)dereferncing the ptr will give gv
    
    return 0;
}
