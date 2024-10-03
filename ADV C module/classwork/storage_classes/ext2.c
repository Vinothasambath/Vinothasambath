#include <stdio.h>


static int num; //static given priority
extern int num;

// error--> int num;static int num
//error--> extern int num;static int num

int func_1()
{
     printf("num is %d from file2\n", num);
     return 0;
}
