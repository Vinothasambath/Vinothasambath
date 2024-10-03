/*Documentation
NAME:Vinotha sambath
DATE:6.2.2023
DESCRIPTION:program to print all possible combinations of given string.
SAMPLE INPUT:Enter a string: abc
SAMPLE OUTPUT:
All possible combinations of given string :abc
acb
bca
bac
cab
cba
 */
#include<stdio.h> 

void combination(char [],int ,int );
int my_strlen(char []);
void swap( char * ,char *  );

int main()

{
        char str[100];
        int n,flag=0;
        
        printf("Enter a string: ");
        scanf("%100[^\n]",str);
        
        n = my_strlen(str);
        
        for( int i=0; i<n ; i++ )                   //to check if characters are not repeated in string
        {
           for( int j=i+1; j<n ; j++)
           {
               if(str[i] == str[j])
               {
               flag=1;
               break;
               }
           }
        } 
        if ( flag == 1 )
        {
            printf("Error: please enter distinct characters.\n");     //repeated -->print error
         
        }
        else
        {
            printf("All possible combinations of given string :");    //if string characters are unique
            combination(str,0,n-1);    
        }
            return 0;
}

int my_strlen(char *str)                                  //find string length function
{
    char *ptr=str;
    while( *ptr++ );
    return ptr-str-1;
}

void swap( char *start ,char *i )                        //swapping function
{
    char temp=*start;
    *start=*i;
    *i=temp;
}

void combination( char *str, int start ,int end )
{
        int i;

        if ( start == end )
        {
            printf("%s\n",str);                                     //print string is start==end
        }
        else
        {
        for ( i=start ; i <=end ; i++ )
        {
            swap(&str[start],&str[i]);                           //swap before calling combination func
            combination( str , start+1 , end );                 //recursive call
            swap(&str[start],&str[i]);                           //swap after calling combination func
        } 
        }
}





















