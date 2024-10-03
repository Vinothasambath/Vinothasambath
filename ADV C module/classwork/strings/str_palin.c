/*Documentation
NAME:Vinotha sambath
DESCRIPTION:using simple method
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    puts("Enter a string");
    scanf("%s",str);

    
    int flag=0, i;
    int length=strlen(str);


    for( i=0; i<length/2 ; i++ )
    {
      if( str[i] == str[length-i-1] )
      {
         flag++;
      } 
      else
      {
          flag=0;
      }
    }
    if(flag == i )
    {
        printf("PALINDROME\n");
    }
    else
    {
        printf("NOT PALINDROME\n");
    }
    return 0;
}

