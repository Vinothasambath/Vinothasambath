/*Documentation
NAME:Vinotha sambath
DESCRIPTION:program to reverse a string
 */

#include<stdio.h>
#include<string.h>

char * my_strrev( char *str )
{
    char *end=str;
    
    while(*end)
    {
        *end++;
    }
    --end;

    int i,temp;

    for( i=1; i<=(strlen(str)/2); i++ ) //len/2 is enough as both are going swap till the centre point
        //if start loop at 0, strlen-1
    {
        temp=*str;
        *str=*end;
        *end=temp;
        str++;
        end--;
    }
    return str;
    
}

int main()
{
   char str[30];
   puts("ENTER A STRING");
   fgets(str,30,stdin);

  my_strrev(str);
  
  printf("The Reverse of string : %s\n",str);

  return 0;
}
