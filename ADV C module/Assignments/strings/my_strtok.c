/*Documentation
NAME:Vinotha sambath
DATE:5.2.2023
DESCRIPTION:program to implement strtok function
SAMPLE INPUT:
Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Enter string2 : ;./-:
SAMPLE OUTPUT:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
Mumbai

 */

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];

    printf("Enter the string  : ");
    scanf("%s", str);

    __fpurge(stdout);

    printf("Enter the delimeter : ");
    scanf("\n%s", delim);

    __fpurge(stdout);

    char *token = my_strtok(str, delim);
    printf("Tokens :\n");

    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}

char *my_strtok(char *str , const char delim[] )
{
      static int pos;                                   //take static variable to remember current position
      static  char *tok;                                //static pointer tok
   
      int i=pos,j=0 ,found=0 ;                      //i=pos to pass the token with starting position

      if ( str != NULL )                                //for the first time pointer is given to address the str is holding
          tok=str;                                      //after first loop in main NULL is passed to str
      
      while ( tok[pos] !='\0' )              
      {
          j=0;found=0;                              //before checking each character with all delimiters ,j, found are set as 0

          while ( delim[j] !='\0' )                     
          {
              if ( tok[pos] == delim[j] )               //if the char are matching
              {
                  tok[pos] = '\0';                      //set that char as null char
                  found=1;                          //set found=1 ,as the delimiter is matched with the string
                  break;                            //break from the loop
              }
              j++;                                  //if not matched increment j
          }
              if(!found)                        //if not found
              {
                  if( tok[i] == '\0' )              //check the char is null
                  {   
                      i=++pos;                      //if the char is null ,change the i value to next posiition
                      continue;                     //skip the rest of statements,and move over to next iteration
                  }
                  pos++;
                  }
                  else                             
                  {
                  pos++;
                  if(tok[i] != '\0')               //if char is not null
                  {
                      return &tok[i];              //return the starting address

                  }
                  i=pos;                          
                  }
          }
     
      if ( tok[i] == '\0' )                        //if the char has reached the last null of string
      {    return NULL;                            //return null to make the condition fail in main while loop
      }

    return &tok[i];                                //return tok if tok[pos] == '\0'
}
