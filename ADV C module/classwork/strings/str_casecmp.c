/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:implementing strcmp() function ignoring the cases
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
#include<stdio_ext.h>
#include<ctype.h>

int  my_strcasecmp(const char *str1,const char *str2)
{
    while(toupper(*str1) == toupper(*str2) && *str1 != '\0' && *str2 != '\0')         //both ascii char values are equal ,both the pointers value are not null
    {
        *str1++;                                                 
        *str2++;
    }
    if ( *str1 == *str2 )              //both pointers addr values == to null when loop is successfully reached null char
        return 0;                      //hence stings are equal
    else 
        return *str1-*str2;            
}
int main()
{
 
char  str1[10],str2[10];
puts("Enter the string1");
fgets(str1,10,stdin);
__fpurge(stdin);
puts("Enter the string2");
fgets(str2,10,stdin);

if( my_strcasecmp(str1,str2) )
    printf("strings are not equal\n");
else
    printf("strings are equal\n");

return 0;
}
