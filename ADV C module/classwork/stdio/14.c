#include<stdio.h>

// example

int fun(char *str1)
{

  char *str2 = str1;    //str2 --> 0th index
  while(*++str1);      //str1 pointing to null char

  return (str1-str2);  //(9-0)
}
 
int main()
{
  char *str = "GeeksQuiz";
  printf("%d\n", fun(str));
  return 0;
}
