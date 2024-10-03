#include <stdio.h>

//assume base address is 2000
int main()
{ 
   unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, 
                           {7, 8, 9}, {10, 11, 12}};
   
   printf("%p, %p, %p", x+3, *(x+3), *(x+2)+3);  //2036 2036 2036
}


//x+3 ---> 2000+3*sizeof1Darray =2000+(3*12)=2036
//*(x+3)--->same 2036 (2D array)
//*(x+2)+3--->*(2000+2*sizeof1d)+3*sizeofint = 2000 + 2*(3*4) + 3*4 = 2036
