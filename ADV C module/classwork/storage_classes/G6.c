//ERROR LINKAGE DISAGREEMENT

#include <stdio.h>

static int x = 20;     //if its extern no error,if declared with extern keyword -->warning

int main()
{
      int x;
       {
           int x = 10;
            {  
                 extern int x;       //extern variable never links with static variable
                 printf("x %d\n", x); //if x is extern 20
            }             
          printf("x %d\n", x);       //10
        }
      printf("x %d\n", x);           //gv or 0
return 0;
}
