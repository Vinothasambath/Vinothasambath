//FILE 1

#include <stdio.h>
#include<unistd.h>

int num=10;      

int func_1();
int func_2();

int main()
{
          while (1)
           {
                num++;     
               func_1();
               sleep(1);
               num++;
               func_2();
               sleep(1);
               printf("FILE 1 num:%d\n",num);
           }
            return 0;
}
