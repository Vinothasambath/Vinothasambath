#include <stdio.h>

int f(int x, int *py, int **ppz)
{
  int y, z;
  **ppz += 1;     //**ppz=4+1=5
   z  = **ppz;   // z=5
  *py += 2;      // *py=5+2=7
   y = *py;      // y=7
   x += 3;       // x=4+3=7 here x value is already received ,sp changes made to c wont affect it
   return x + y + z;  //7+7+5=19
}
  
void main()
{
   int c, *b, **a;
   
   c = 4;
   b = &c;  //single ptr
   a = &b;  //double ptr
   
   printf( "%d\n", f(c,b,a));
   
}
