/*Documentation
NAME:Vinotha sambath
DATE:11.1.2023
DESCRIPTION:program to implement own islower() function
SAMPLE INPUT:Enter the character: a
SAMPLE OUTPUT:Entered character is lower case alphabet
 */

#include <stdio.h>

int my_islower(int);                                      //function prototype

int main()
{
    char ch;                                           
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);                                //calling function and return is stored in variable ret
    
    if ( ret != 0 )                                      //if the retuned value is non zero
    {
        printf("Entered character is lower case alphabet\n");  //lower case
    }
    else
    {
        printf("Entered character is not lower case alphabet\n");  //ret=0 ,not a lower case
    }
    return 0;
}

int my_islower( int n )                                  //function definition
                                                         //passing char to int (equ ASCII decimal value is taken as integer)
{
    if ( n >= 97 && n <=122 )  //if n is within the range
       return 1;                                         //return non zero
    else
        return 0;                                        //not within the range return 0
}
