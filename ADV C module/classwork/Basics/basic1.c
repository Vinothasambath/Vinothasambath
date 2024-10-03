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
    char ch ;
  

    printf("Enter a character ");
    scanf("%c",&ch);

    printf("%c\n", ch);
    printf("%d\n", ch);

    printf("%c\n", 'x');
    printf("%d\n", 'x'); 

    printf("%zu\n",sizeof(ch));
    printf("%zu\n", sizeof(float));
    return 0;
}

