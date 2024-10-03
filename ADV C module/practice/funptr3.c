#include<stdio.h>

int add(int num1, int num2);
int oper(int (*f)(int, int), int a, int b);


int add(int num1, int num2)                          //inumbers are  added
{
    return num1 + num2;                               //returned ,goes to oper return
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int oper(int (*f)(int, int), int a, int b)         //oper receives the func pointer in *f which is also function pointer
{
    return f(a, b);                                //that address is called with a and b which has 2, 4
}

int main()
{
    int (*fptr)(int , int );             //func pointer declared

    fptr=add;                            //add(ie) address of func definition is given to pointer
    printf("ADDITION:%d\n",oper(fptr,2,4));          //oper func called with the funtion pointer and 2 numbers 
    
    
    fptr=sub;
    printf("SUBTRACTION:%d\n",oper(fptr,2,4));

    return 0;
}

