// C program to demonstrate the difference
// between %i and %d specifier

#include <stdio.h>
 
int main()
{
    int a, b, c;
 
    printf("Enter value of a in decimal format:");
    scanf("%d", &a);  //if 012 given its considered as 12 not octal equalent
 
    printf("Enter value of b in octal format: ");
    scanf("%i", &b); //while reading with %i base is taken ,hence 012 is given as 10
 
    printf("Enter value of c in hexadecimal format: ");
    scanf("%i", &c);
 
    printf("a = %i, b = %i, c = %i\n", a, b, c);
    //no differnce in printf,in scanf how it looks into that number is differnt 
 
    return 0;
}
/*
Output:
Enter value of a in decimal format:12
Enter value of b in octal format: 012
Enter value of c in hexadecimal format: 0x12
a = 12, b = 10, c = 18
*/
