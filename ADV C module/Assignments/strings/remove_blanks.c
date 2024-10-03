/*Documentation
NAME:Vinotha sambath
DATE:31.1.2023
DESCRIPTION:program to replace each string of one or more blanks by a single blank
SAMPLE INPUT:
Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
SAMPLE OUTPUT:Pointers are sharp knives.

 */

#include <stdio.h>

void replace_blank(char []);

int main()
{
    char str[100];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%99[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}

void replace_blank( char ptr[] )
{
       int i=0 , j=0;
     
    while ( ptr[i] != '\0')
    {
       if ( (ptr[i] == '\t' && ptr[i+1] == '\t') || (ptr[i] == ' ' && ptr[i+1] == ' ') || (ptr[i] == ' ' && ptr[i+1] == '\t') || (ptr[i] == '\t' && ptr[i+1] == ' ' ) )
           {  
                ptr[i] =' ';                  //if space or tab encountered in adjacent char of string 
                j=i+1;
                while( ptr[j] != '\0' )       //swap the element to the previous position 
                {
                    ptr[j]=ptr[j+1];
                    j++;
                }
               // j=0;                         //setting j=0 for next swapping 
                i=0;                         //setting i to zero for finding repeatition of spaces
      }
     i++;
    }
}

