/*Documentation
NAME:Vinotha sambath
DATE:25.1.2024
DESCRIPTION:reverse the given string using rucursion method
SAMPLE INPUT:Enter a string : Hello World
SAMPLE OUTPUT:Reverse string is : dlroW olleH
 */


#include <stdio.h>

void reverse_recursive(char str[], int index, int len);

int main()
{
    char str[50];
    int len=0;
    char *ptr=str;                    //pointer to storage base address of arr

    printf("Enter any string : ");
    scanf("%[^\n]", str);

    while(*ptr)                       //finding the length of the string
    {
        len++;
        ptr++;
    }
    reverse_recursive(str, 0 ,len );   //passing str base addrs,first index,len

    printf("Reversed string is %s\n", str);
    
    return 0;

}
void reverse_recursive(char *str,int index,int len)
{
    if( len/2 > index )                                      //function recursion happens till len/2 > index
    {
    
        char temp = str[index];    
        str[index]=str[len-index-1];
        str[len-index-1]=temp;
      reverse_recursive(str, index+1, len);                 // calling recursive function by increasing index everytime
                                                            //incrementing the index by 1 ,for each function call
    }
}



