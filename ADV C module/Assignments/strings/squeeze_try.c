/*Documentation
NAME:Vinotha sambath
DATE:31.1.2023
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
   int i=0 ,j=0 ;                               //initializing 
    
   while ( str2[j] )                           //when string2[j] != '\0'
   {
       while( str1[i] )                       //similarly string1[i] !='\0'
        { 
            if  ( str2[j] == str1[i] )       //if the character in string2 matches string1
            {
                 while ( str1[i] )           //swap/copy the char in string1 till reaching null
                 {
                     str1[i]=str1[i+1];
                     i++;
                  }
            i=0;                           //rest the index value i=0
            }
        i++;                               //check for the repeatition of same character or the string1 will reach null
        }
       i=0;                               //again after reaching null char set the index to i=0;
       j++;                               //check for the next character in string2,hence increm j

  }
} 
