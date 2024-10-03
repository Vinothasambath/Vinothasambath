/*Documentation
NAME:Vinotha sambath
DATE:11.1.2023
DESCRIPTION:program to implement own isalnum() function
SAMPLE INPUT:Enter the character: a
SAMPLE OUTPUT:Entered character is an alphanumeric character.
 */

#include <stdio.h>

int my_isalnum(int);                                      //function prototype

int main()
{
    char ch;                                           
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);                                //calling function and return is stored in variable ret
    
    if ( ret != 0 )                                      //if the retuned value is non zero
    {
        printf("Entered character is alphanumeric character\n");  //Alphanumeric
    }
    else
    {
        printf("Entered character is not alphanumeric character\n");  //ret=0 ,not an alphanumeric
    }
    return 0;
}

int my_isalnum( int n )                                  //function definition
                                                         //passing char to int (equ ASCII decimal value is taken as integer)
{
    if ( ( n >= 48 && n <= 57) || (n >= 65 && n <= 90) || ( n >= 97 && n <= 122 ) )  //if n is within the range
       return 1;                                         //return non zero
    else
        return 0;                                        //not within the range return 0
}
