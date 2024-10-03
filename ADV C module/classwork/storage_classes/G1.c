//GLOBAL VARIABLES

/*
#include <stdio.h>

int x;         //declaration without definition ,address is not given to x like local variables
               //stored in .bss of data seg
    
int foo()
{
     printf("x %d\n", x);    //prints 0
     return ++x;
}
int main()
{
     foo();
     printf("x %d\n", x);   //prints 1
     return 0;
}

*/
#include <stdio.h>

int x=10;         //declaration with initialization,memory/address is assigned to x
               //stored in initialized part of data seg
    
int foo()
{
     printf("x %d\n", x);    //prints 10
     return ++x;
}
int main()
{
     foo();
     printf("x %d\n", x);   //prints 11
     return 0;
}
