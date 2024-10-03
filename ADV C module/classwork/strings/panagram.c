/*Documentation
NAME:Vinotha sambath
DATE:23.1.2023
DESCRIPTION:program to check given string is Pangram or not
SAMPLE INPUT:Enter the string: The quick brown fox jumps over the lazy dog
SAMPLE OUTPUT:The Entered String is a Pangram String
 */

#include <stdio.h>

int pangram(char []);                 //func prototype

int main()
{
    char str[200];
    int result;
    printf("Enter the string:");
    scanf("%199[^\n]",str);
    
    result=pangram(str);                //func call

    if( result == 26 )                   //if return from the funct ==26
    {
        printf("The Entered String is a Pangram String\n");        //pangram
    }
    else
    {
        printf("The Entered String is not a Pangram String\n");    //not pangram
    }

    return 0;
}


int pangram(char *str)              
{
    char arr[26]={0};                  //array with 26 elements initialized to 0
    int index,i,count=0;               
    while(*str)                        //condition is true as long as the pointer address is holding null
    {
    for( i=0 ; i<26 ; i++ )            //each input charof string is compared with the upper and lower case characters
    {
            if( *str >= 65 && *str <= 90 )    //if upper case
               index=*str-65;                 
            else if ( *str >=97 && *str <=122 )   //if lower case 
               index=*str-97;
            
            arr[index]=1;                         //particular index value is assigned to 1
    }
    str++;                                        //incrementing str
    }

    for( i=0 ; i< 26 ; i++ )
    {
        if( arr[i] == 1 )                        //if all array values are 1
        {
            count++;                             //count = 26

        }
    }
    return count;
}

