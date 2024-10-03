#include <stdio.h>
int add(int num1, int num2)
{

    return num1 + num2;
}
int main()
{

    int (*fptr)(int, int);
    fptr = add;
    
    printf("address of function:%p\n", add);
    printf("address the pointer pointing :%p\n", fptr);
    printf("address of pointer itself :%p\n", &fptr);

    printf("func invoked using funptr:%d\n", fptr(2, 4));
    printf("func invoked by dereferncing funptr:%d\n", (*fptr)(100, 200));
    printf("function involked using address/function name:%d\n",add(10,20));

    printf("sizeof function pointer : %zu\n",sizeof(fptr));
    printf("sizeof functn definition : %zu\n",sizeof(*fptr));
    printf("sizeof func name/definition : %zu\n",sizeof(add));
    return 0;
}
