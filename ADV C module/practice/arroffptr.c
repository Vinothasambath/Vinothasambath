//array of function pointer

#include<stdio.h>

int add (int a, int b);
int sub (int a, int b);
float mul (int a, float b);
float div (int a ,float b);

int main()
{
    int (*fptr[]) (int ,int )={add,sub};               //2 array of function pointers fptr,fptr1 of same inputs type and return type
    float (*fptr1[]) (int ,float)={mul,div};

    printf("addition :%d\n",fptr[0](10,20));
    printf("Subtraction:%d\n",fptr[1](20,10));

    printf("multiplication :%f\n",fptr1[0](15,2.5));
    printf("Division:%f\n",fptr1[1](200,2.5));
    
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

float mul (int a, float b)
{
    return(a*b);
}
float div (int a ,float b)
{
    return(a/b);
}

