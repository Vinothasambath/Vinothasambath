/*Documentation
NAME:Vinotha sambath
DATE:11.1.2023
DESCRIPTION:program to implement own isxdigit() function
SAMPLE INPUT:Enter the character: a
SAMPLE OUTPUT:Entered characted is an hexadecimal digit.
 */

#include <stdio.h>

int is_xdigit(int);                                      //function prototype

int main()
{
    char ch;                                           
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);                                //calling function and return is stored in variable ret
    
    if ( ret != 0 )                                      //if the retuned value is non zero
    {
        printf("Entered character is an hexadecimal digit.\n");  //hexa
    }
    else
    {
        printf("Entered character is not an hexadecimal digit.\n");  //ret=0 ,not an hexa decimal character
    }
    return 0;
}

int is_xdigit( int n )                                  //function definition
                                                         //passing char to int (equ ASCII decimal value is taken as n)
{
    if ( ( n >= 48 && n <= 57) || (n >= 65 && n <= 70) || ( n >= 97 && n <=102 ) )  //if n is within the range
       return 1;                                         //return non zero
    else
        return 0;                                        //not within the range return 0
}
