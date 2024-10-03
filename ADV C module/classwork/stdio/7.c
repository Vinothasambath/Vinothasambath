/* A simple scanset example */

#include <stdio.h>
#include<stdio_ext.h>

int main(void)
{
    char str[128];
 
    printf("Enter a string: ");
    scanf("%[A-Za-z0-9]", str);     //selective scanf
 
    printf("You entered: %s\n", str);
   
    __fpurge(stdin);

    char str1[50];

    printf("Enter a string with spaces: ");
   // scanf("%[^\n]s", str1);         //from beginning till newline (not included)
    scanf("%[^\n]%*c",str1);       //ignores \n
 
    printf("You entered: %s\n", str1);

    char ch;
    printf("ENter a char ");
    scanf("%c",&ch);
    printf("THE CHAR IS %c\n",ch);
    return 0;
}
