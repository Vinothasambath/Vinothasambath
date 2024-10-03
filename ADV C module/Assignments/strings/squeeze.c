/*Documentation
NAME:Vinotha sambath
DATE:30.1.2023
DESCRIPTION:Squeeze the character in s1 that matches any character in the string s2
SAMPLE INPUT:
Enter s1 : Dennis Ritchie
Enter s2 : Linux
SAMPLE OUTPUT:After squeeze s1 : Des Rtche
 */

#include <stdio.h>

void squeeze(char [], char []);

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
   
    getchar(); 

    printf("Enter string2:");
    scanf("%[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}

void squeeze( char str1[] , char str2[] )
{
   int i=0 ,j=0 ,count=0;
    
   while ( str2[j] != '\0')
   {
       while( str1[i] !='\0' )
        { 

          if  ( str2[j] == str1[i] )
           {
             
            while ( str1[i] != '\0' )
           {
               str1[i]=str1[i+1];
               count++;
               i++;
           }

           i=i-count-1;
           }

           i++;
           count=0;
        }
       i=0;
       j++;

        }
} 
