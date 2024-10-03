/*Documentation
NAME:Vinotha sambath
DESCRIPTION:WAP to concatenate two strings
 */
#include<stdio.h>
#include<stdio_ext.h>

char *my_strcat(const char *str2, char *str1)      //destination should be modified so no const
{
    char *ptr=str1;
    while(*str1)
    {
        str1++;
    }
    
    while( *str1++ = *str2++ );

    return ptr;
}
int main()
{
    char str1[50];
    char str2[20];
    
    printf("ENTER STRING1: ");
    scanf("%49[^\n]",str1);           //use selective scanning & fgets
  
    __fpurge(stdin);

    printf("ENTER STRING2: ");
    scanf("%19[^\n]",str2);
   
    my_strcat(str2,str1);

    printf("String after concatenation:\n %s\n",str1);
    return 0;
}



