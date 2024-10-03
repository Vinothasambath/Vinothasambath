



#include <stdio.h>

char *foo()
{
      char ca[12] = "Hello World";  //local array //both in stackframe   
      return ca;                    //cant return cause  stack frame is destroyed
}

int main()
{
     char *ca;   //pointer
     ca = foo(); //holding return address from func foo,func call
     printf("ca is %s\n", ca);   //here we are trying to print the string ie)dereferncing the address
     return 0;                   //so smart compilers gives warning then if executed ,returns ((null)) if it is string
}
