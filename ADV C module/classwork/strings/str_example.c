/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
char rev( const char *str)
{
  char *ptr=str;
  while(*str)
  {
     str++;
  }
  str-=1;
  while(str>=ptr)
  {
     printf("%c",*str--);
  }
}
int main()
{
    char str[]="hello";
    rev(str);
    return 0;
}
