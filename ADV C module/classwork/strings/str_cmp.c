/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:implementing strcmp() function
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
#include<stdio_ext.h>

int  my_strcmp(const char *str1,const char *str2)
{
    while(*str1==*str2 && *str1 != '\0' && *str2 != '\0')         //both ascii char values are equal ,both the pointers value are not null
    {
        *str1++;                                                 
        *str2++;
    }
    if ( *str1 == *str2 )              //both pointers addr values == to null when loop is successfully reached null char
        return 0;                      //hence stings are equal
    else 
        return *str1-*str2;            //else if +value if str1 holds lowercase char,-value if str1 holds uppercase char
}
int main()
{
 
char  str1[10],str2[10];
puts("Enter the string1");
fgets(str1,10,stdin);
__fpurge(stdin);
puts("Enter the string2");
fgets(str2,10,stdin);

int ret;
ret=my_strcmp(str1,str2);

printf("return value is %d\n",ret);            //printing for my ref 

if( ret > 0 )
    printf("string1 is greater\n");
else if( ret < 0 )
    printf("string2 is greater\n");
else
    printf("strings are equal\n");

return 0;
}
