/*Documentation
NAME:Vinotha sambath
DATE:23.1.2022
DESCRIPTION:program to implement getword function
SAMPLE INPUT:Enter the string : Hello
SAMPLE OUTPUT:You entered Welcome and the length is 7
 */

#include <stdio.h>

int getword(char str[]);             //function prototype

int main()
{
        int len = 0;           
	    char str[100];

		printf("Enter the string : ");    
		scanf(" %[^\n]", str);             //reading string using selective scanf

		len = getword(str);                //func call

        printf("You entered %s and the length is %d\n", str, len);             //displaying string and length
        return 0;
}


int getword(char *str)
{
    
    int count=0;                        

    while(*str)                 //condiition is true when the pointer is holding non zero characters ,if null=0,loop terminates
    {
        if (*str == ' ')        //if pointer is holding space
        {
            *str='\0';          //make the particular array index  as null
        }
        else
        {
            ++count;           //if not equal to space
            str++;             //increment str
        }
        
    }
    str=str-count;             //setting the pointer to the beggining of the string as pointer str is now pointing to null
    return count;
}
            
