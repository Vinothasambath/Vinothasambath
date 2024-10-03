/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:sprintf example
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include <stdio.h>
int main()
{
int num1 = 123;
char ch = 'A';
float num2 = 12.345;
char string1[] = "sprintf() Test";

char string2[100];   //array with enough space

sprintf(string2, "%d %c %f %s\n",num1 , ch, num2, string1);//prints to buffer string2(buffer here is array) instead of stdout
printf("%s\n", string2);  //printing the buffer
return 0;
}
