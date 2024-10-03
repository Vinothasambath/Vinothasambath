#include<stdio.h>
/*
int main()
{
    char str[10];     //if more than 10 character are entered string is displaced but stack smashing detected
    puts("Enter the string");
    gets(str);        //warning given to use fgets
    puts(str);
}
*/


int main()
{
char str[10];
puts("Enter the string");
fgets(str, 10, stdin);  //base address of array,size,input stream
puts(str);              //only the limited size will be displayed
return 0;               //size should match if size is > in fgets than  the mentioned one in array declaration ,stack smaching happens ,only declared size is taken
}
