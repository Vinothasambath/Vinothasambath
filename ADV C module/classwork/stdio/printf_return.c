/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include <stdio.h>
int main()
{
int ret;
char string[] = "Hello World";
ret = printf("The string is %s\n", string);    //26 including hello world   
printf("The previous printf() printed %d chars\n", ret);//counts all chars in prev printf statement
return 0;
}
