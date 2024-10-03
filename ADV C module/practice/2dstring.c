//2D array with strings

#include <stdio.h>
int main()
{
       char s[3][8] = {"Array","of","Strings"};
       printf("%s %s %s\n", s[0], s[1], s[2]);
       
       printf("PRINTING CHARACTER BY CHARACTER:\n");
       for(int i =0 ; i < 3 ; i++ )
       {
          for(int j=0 ; j< 8 ; j++ )
          {
             printf("%c",(*(s+i))[j]);
          }
         printf("\n");
       } 



       return 0;
}

