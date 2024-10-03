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
int num1 = 123;
char ch = 'A';
float num2 = 12.345;
char string[] = "Hello World";
printf("%d %c %f %s\n",num1 , ch, num2, string);
printf("%+05d\n", num1);   //width is 5 ,remaining filled with +0
printf("%.2f %.5s\n", num2, string); //rounding off,prints 5 char
return 0;
}
