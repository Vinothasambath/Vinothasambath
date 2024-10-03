/*Documentation
NAME:Vinotha sambath
DATE:25.1.2022
DESCRIPTION:reverse the given string using iterative method
SAMPLE INPUT:Enter a string : Hello World
SAMPLE OUTPUT:Reverse string is : dlroW olleH
 */
#include <stdio.h>

void reverse_iterative(char str[]);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str); 
}


void reverse_iterative( char *str )
{
    char temp;             
    int i , length=0;

    while(*str)           //LENGTH
    {
        str++;
        length++;
        
    }
    str=str-length;      //pointer moves to the base address ie) index 0


    for( i=0 ; i<length/2 ; i++ ) //REVERSING STRING
    {
        temp=str[i];              //loop runs for lenght/2 times as swaping stops at centre
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }

}

