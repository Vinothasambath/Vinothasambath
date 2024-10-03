/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:implementing strlen() function
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

size_t my_strlen(const char *str)
{
    size_t len=0;
    while(*str++)
    {
        len++;
       
    }   
    return len;
}
int main()
{
 
char  str[]="hello world";
int ret;
ret=my_strlen(str);
printf("length is : %d\n", ret);
return 0;
}
