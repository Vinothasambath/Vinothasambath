/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

int main()
{
    char option;
    printf("Enter a character or digit ");
    scanf("%c", &option);

    switch( option )
    {
        case 'A'...'Z':
        printf("Upper case character\n");
        break;

        case 'a'...'z':
        printf("Lower case character\n");
        break;

        case '0'...'9':
        printf("Digit \n" );
        break;

        default:
        printf("Special character\n");
     }
return 0;
       
}
