/*Documentation
NAME:Vinotha sambath
DESCRIPTION:to compare string2 with string1 up to n characters,implementing strncmp()

SYNTAX:strncmp(const char *str1, const char *str2, size_t n)

 */

#include<stdio.h>
#include<stdio_ext.h>

int my_strncmp(const char *str1,const char *str2,size_t n)
{
    int count=0;
    
    while( count++ < n && *str1==*str2 &&  *str1 != '\0' && *str2 != '\0')
    {
        *str1++;                                                 
        *str2++;
   
    }

    if ( *str1 == *str2 )              
        return 0;                      
    else 
        return *str1-*str2;     
}
int main()
{
 
char str1[10];
char str2[10];
size_t n;
puts("Enter the string1");
fgets(str1,10,stdin);

__fpurge(stdin);

puts("Enter the string2");
fgets(str2,10,stdin);

printf("Enter the value of n till which comparision to be done:");
scanf("%ld",&n);
if( n == 0 )
{
    printf("enter a number greater than 0");
}
else if ( n > 0 )
{
int ret;
ret=my_strncmp(str1,str2,n);

printf("return value is %d\n",ret);            //printing for my ref 

if( ret == 0 )
    printf("strings are equal upto %ld characters\n",n);
else if( ret > 0 )
    printf("string1 is greater\n");
else 
    printf("string2 is greater\n");
}
return 0;
}
