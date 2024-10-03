/* 
A `%' is written. No argument is converted. The complete conversion specification is`%%'.
So we can print “%” using “%%”
*/


// Program to print %

#include<stdio.h>

int main()
{
   printf("%%");
   printf("%");
   getchar();
   return 0;
}
/*
We can also print “%” using below.


printf("%c", '%');
printf("%s", "%");

*/
