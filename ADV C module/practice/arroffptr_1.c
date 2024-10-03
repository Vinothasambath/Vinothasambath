//array of function pointer

#include<stdio.h>

int add (int a, int b);
int sub (int a, int b);
int oper( int (*f)(int ,int), int a ,int b);

int main()
{
    int (*fptr[]) (int ,int )={add,sub};               //array of function pointer- fptr of same inputs type and return type

    printf("addition :%d\n",oper(fptr[0],10,20));       //pointer holding address of add and sub are passed to oper
    printf("Subtraction:%d\n",oper(fptr[1],20,10));
    
    return 0;
}

int add (int a, int b)
{
    return (a+b);
}
int sub (int a, int b)
{
    return (a-b);

}
int oper( int (*f)(int ,int), int a ,int b)               //pointer of function received in fn ptr with arg
{
    return f(a,b);                                        //calling add(a,b) and sub(a,b) -->f holds address of add through pointer
}


