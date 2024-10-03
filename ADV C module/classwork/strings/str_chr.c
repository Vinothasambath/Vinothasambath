/*Documentation
NAME:Vinotha sambath
DESCRIPTION:
 */
#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

char * my_strchr( const char * str, char * c )
{
     const char *ptr=str;

    for( int i=0;i<strlen(str) ;i++ )
    {
        if ( *str == *c )
        {
            break;
        }
        else
        {
            str++;
        }
    }
    return  str;
}


int main()
{
    char str[30];
    char ch;
    puts("ENTER A STRING: ");
    scanf("%29[^\n]",str);

    __fpurge(stdin);

    puts("ENTER A CHARACTER: ");
    scanf("%c",&ch);

    my_strchr(str,&ch);
    printf("the string character is %s",str);
    return 0;
}

