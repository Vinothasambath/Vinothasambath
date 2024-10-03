/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include <stdio.h>
#include<stdio_ext.h>
int main()
{
int num1;
char ch,ch1,ch2;
float num2;
char string[10];

scanf("%d %c %f %s", &num1 , &ch, &num2, string);//without space also takes input from input buffer
printf("%d %c %f %s\n", num1 , ch, num2, string);
printf("enter an character\n");   //use getchar()  or __fpurge(stdin) so that the \n in input buffer is read 
   __fpurge(stdin);
scanf("%c",&ch1);
printf("the char is %c\n",ch1);      //if more than 1 char is enter remining will be there in input buffer ,so use like above
scanf("%c",&ch2);
printf("another char %c\n",ch2);
return 0;
}
