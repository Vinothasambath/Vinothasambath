#include <stdio.h>
 
#define R 10
#define C 20
 
int main()
{
   int (*p)[R][C];
   printf("%ld\n",  sizeof(*p));  // *p-->pointer to an 2d array 10*20*sizeof int--->10*20*4=800
   return 0;
}


