//STATIC EXAMPLE


/*
#include <stdio.h>
int *foo()
{
     static int i = 10;
     int *j = &i;
     return j;
}
int main()
{
     int *i;
     i = foo();
     printf("*i %d\n", *i);
     return 0;
}
*/


#include <stdio.h>
int *foo()
{
    int i = 10;              //i is a local var -->stack frame destroyed,
                             // if i is  static variable--> possible
    static int *j = &i;      //its is not posibble,here pointer is static ,assigned address is not
    return j;                //because once the stack frame is deleted ,the local variable is deleted

    //int i=10;
    //static int j=10; //this also not possible
}
int main()
{
int *i;
   i = foo();
   printf("*i %d\n", *i);
   return 0;
}



