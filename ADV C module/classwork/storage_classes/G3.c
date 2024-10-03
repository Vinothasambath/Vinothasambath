//GLOBAL VARIABLES

/*

#include <stdio.h>
int x = 10;
int x;      //implicitly extern looking for previous definition ,so no error

int foo()
{
      printf("x %d\n", x);
      return 0;
}
int main()
{
      foo();
      return 0;
}

*/


#include <stdio.h>
int x = 10;
int x = 20;         //refinition of x cant be done,as already memory and datas are allocated DATA SEG
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
