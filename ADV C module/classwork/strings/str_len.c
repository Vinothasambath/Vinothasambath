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
/*
size_t my_strlen(const char *str)
{    
    const  char * ptr=str;                 //while assigning to ptr make sure it is const so that the str is not modified        
    while(*str++);                         // when str reaches null loop terminates but the increment happens
                                           //right now the str is pointing next to null so using -1
    return str-ptr-1;                        
}
*/

size_t my_strlen(const char *str)
{    
    const  char * ptr=str;                   
    while(*str)
    {
       str++;                              // when str reaches null loop terminates but wont increment to next addr
    }                                       //right now the str is pointing null
    return str-ptr;                        
}
int main()
{
 
char  str[]="hello world";
int ret;
ret=my_strlen(str);
printf("length is : %d\n", ret);
return 0;
}
