
#include <stdio.h>
#include<string.h>

void replace_blank(char []);

int main()
{
    char str[100];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%99[^\n]", str);
    
    printf("lenght before %ld\n",strlen(str));
    replace_blank(str);
    
    printf("%s\n", str);
    printf("lenght after %ld\n",strlen(str));
}

void replace_blank( char str[] )
{
    //my code
     /*  int i=0 , j=0;
     
    while ( ptr[i] != '\0')
    {
       if ( (ptr[i] == '\t' && ptr[i+1] == '\t') || (ptr[i] == ' ' && ptr[i+1] == ' ') || (ptr[i] == ' ' && ptr[i+1] == '\t') || (ptr[i] == '\t' && ptr[i+1] == ' ' ) )
        {  
                ptr[i] =' ';             
                j=i+1;
                
                while( ptr[j] != '\0' )       
                {
                    ptr[j]=ptr[j+1];
                    j++;
                }
       
                i=0;
            }
     i++;
    }

    */

    //chat gpt code
    int i, j;
    int len = strlen(str);
    
    for (i = 0, j = 0; i < len; i++) 
    {
        if (str[i] == ' ' || str[i] == '\t') 
        {
            while (str[i] == ' ' || str[i] == '\t') 
            {
                i++;
            }
            str[j++] = ' ';
        } 
        else {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';


}

