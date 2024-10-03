/*Documentation
NAME:Vinotha sambath
DESCRIPTION: to implement strstr()
 */

#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

char *my_strstr(const char *hay,const char *need)
{
           const char *str1=hay;
           const char *str2=need;
           int length=strlen(need);            //reading the needle length
            
                    int count=0;
                    while(*str2 && *str1)       //loop runs till *str1 and *str2 encounters null charc

                    {
                        if(*str1 == *str2)     //if match of characters are found
                        {
                             count++;          //incre count
                             str1++;           //incre both the pointers also
                             str2++;
                        }
                        else
                        {
                            str1++;            //if match is not found  increment str1
                            str2=str2-count;   // this line is needed cause sometimes 2 char may be matched 3rd one may not be
                            count=0;           //in that case str2 should be decremented and count should start from 0 again
                        }
                    }

                    if (count == length)      //if all characters are matched
                    {
                       return str1=str1-length;  //because we have to return the address of substring where it is found
                    }
                    else
                    {
                         return NULL ;          //if substring is not matched
                    }
             }
int main()
{
    char hay[30] ,need[10];
    
    puts("ENTER STRING: ");
    //fgets(hay,30,stdin);
    scanf("%29[^\n]",hay);
    
    getchar(); 

    puts("ENTER SUBSTRING: ");
    //fgets(need,10,stdin);
    scanf("%9[^\n]",need);

    char *ptr;
    ptr=my_strstr(hay,need);

    if( ptr == NULL )
        printf("Needle not found\n");
    else
        printf("the substring is : %s\n",ptr);
    return 0;
}

