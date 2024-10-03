//scope of local variables

#include <stdio.h>

int main()
{
     int i = 0;        //scope within full main
       {
           int j = 0;         //scope within this block 
           printf("i %d\n", i);//prints i
       }
           printf("j %d\n", j); //doesnt print j cause undeclared in this block
           return 0;
}

