//global variable

#include<stdio.h>

int x = 10;   //declaration with definition,memory is allocated 
              //implicitly extern
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
