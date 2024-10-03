/*Documentation
NAME:Vinotha sambath
DATE:28.1.2023
DESCRIPTION:program to implement atoi fumction
SAMPLE INPUT:Enter a numeric string: 12345
SAMPLE OUTPUT:String to integer is 12345
 */

#include <stdio.h>

int my_atoi(const char []);

int main()
{
    char str[20];

    printf("Enter a numeric string : ");
    scanf("%s", str);

    printf("String to integer is %d\n", my_atoi(str));
}

int my_atoi( const char *str)
{
   int flag=0, i=0 ,num,res=0;

   if( str[i] == '-' )                        //checks if str[0] is -
   {
       flag=1;                               
       i++;
   }
   else if ( str[i] == '+' )                 //chects if str[0] = +
   {
       flag=0;
       i++;                                  //incre i if anyone if cond is true
   }

   while( str[i] >= 48 && str[i] <= 57 )     //string should contains only char 0 to 9
   { 
       num=str[i]-48;
       res=res*10+num;                       //adding numbers after each iteration
       str++;
   }
   if (flag == 1)
   {
       res=res*(-1);                         //if number is negative return with sign
   }
   return res;
}


