//declaration and initialization of local variables


#include <stdio.h>
int main()
{
       int i = 10; //local variables with same name  cant be declared or initialized twice
       int i = 20;  //error 
       {
           printf(“i %d\n”, i);
       }
       printf(“i %d\n”, i);
       return 0;
}

