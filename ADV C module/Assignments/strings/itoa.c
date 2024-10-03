/*Documentation
NAME:Vinotha sambath
DATE:28.1.2023
DESCRIPTION:program to implement itoa function
SAMPLE INPUT:Enter the number : 1234
SAMPLE OUTPUT:Integer to string is 1234
*/

#include <stdio.h>

int itoa(int num, char str[]);

int main()
{
     int num=0;
     char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    itoa(num, str);
    
    printf("Integer to string is %s\n", str);
}

int itoa(int num,char *str )
{
    int rem,res=0,i=0;
    char *ptr=str;

   
    while(num)                    //reversing the integer number
    {
    rem=num%10;
    res=res*10+rem;
    num=num/10;
    }
    
    if ( res < 0 )                //checks if number is negative
    {
        ptr[i]='-';               //add first index with negative char
        i++;
        res=res*(-1);                         
    }
    while (res)                   //storing as character in array
    {
      rem=res%10;               
      ptr[i++]=48+rem;           
      res=res/10;
    }
      ptr[i]='\0';                //appending null character at last


    if ( str[0] == '\0' )         //if the string has only null 
    {
        str[0]=48;                //store char 0 in base address
    } 
    
      return res;
}


