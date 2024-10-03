//FILE 3

#include <stdio.h>

static int num=25;
extern int num;

int func_2()
{
         printf("num is %d from file3\n", num);
         num++;
         return 0;
}
