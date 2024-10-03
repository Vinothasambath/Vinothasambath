#include <stdio.h>
int main(void)
   {
    char c[ ] = "ICRBCSIT17";
    char *p=c;
    printf("%s", c+2[p] – 6[p] – 1);
    return 0;
   
   }


/*
Given String = "ICRBCSIT17" Index of I=0, C=1, R=2, B=3 and so on. Now we are making a pointer p point to character array c. Here 2[p] = p[2] ='R' and 6[p] = p[6] ='I' 'R'-'I' = 9 and c + 2[p] – 6[p] – 1 = c + 9 - 1 = c + 8 So "17" is printed as the string.
  */
