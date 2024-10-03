/*Documentation
NAME:Vinotha sambath
DATE:11.1.2023
DESCRIPTION:program to implement own ispunct() function
SAMPLE INPUT:Enter the character: a
SAMPLE OUTPUT:Entered character is not punctuation character
 */

#include <stdio.h>

int my_ispunct(int);                                      //function prototype

int main()
{
    char ch;                                           
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);                                //calling function and return is stored in variable ret
    
    if ( ret != 0 )                                      //if the retuned value is non zero
    {
        printf("Entered character is punctuation character\n");  //puntuational char
    }
    else
    {
        printf("Entered character is not punctuation  character\n");  //ret=0 ,not a punctuation
    }
    return 0;
}

int my_ispunct( int n )                                  //function definition
                                                         //passing char to int (equ ASCII decimal value is taken as integer)
{
    if ( n != 32 && ( n < 48 || n > 57) && (n < 65 || n > 90) && ( n < 97 || n > 122) )  //if n is within the range
       return 1;                                         //return non zero
    else
        return 0;                                        //not within the range return 0
}
