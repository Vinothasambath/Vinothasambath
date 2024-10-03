/*Documentation
NAME:Vinotha sambath
DATE:18.2.2023
DESCRIPTION:Read n & n person names of maxlen 20. Sort and print the names
SAMPLE INPUT:
Enter the size: 5
Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai
SAMPLE OUTPUT:
The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
*/
#include<stdio.h>
#include<stdlib.h>

int my_strcmp(const char *, const char * );
void sort_names(char (*)[20], int);
char *my_strcpy( char *,const char *);                   

int main()
{
    int row, i;
    printf("Enter the size: ");
    scanf("%d",&row);
    
    char (*name)[20];                                                        //pointer to array
    name=(char (*)[20])malloc(row*sizeof(*name));                            //taking return from malloc

    if( name != NULL )
    {

    printf("Enter the %d names of length max 20 characters in each\n",row);
    for( i=0; i<row ;i++ )
    {
        printf("[%d] -> ",i);                                                
        scanf("%s",name[i]);                                                  //reading the strings in columns for each row
    }
    
    sort_names( name , row );                                                 //calling sort_names function
    
    printf("The sorted names are:\n");
    for( i=0; i<row ; i++)
    {
        printf("%s\n",name[i]);                                               //after sorting 
    }
    free(name);
    return 0;
    }
    else
    {
        printf("memory allocation failed\n");
        return 0;
    }
}

void sort_names( char(*name)[20], int row )
{
    char *temp=malloc(20*sizeof(char));                                         //taking a temp pointer with 20bytes of mem
    if(temp == NULL)
    {
        printf("Memory allocaion failed\n");
        return ;
    }
    for(int i=0 ; i<row ; i++)                                                  //comparing each string in row with next row of string
    {
        for(int j=i+1 ; j<row ; j++)
        {

            int compare = my_strcmp( name[i],name[j] );                         //taking return from mystrcmp to compare var
            if( compare > 1 )                                                    //if the return value is positive
            {
                my_strcpy( temp,name[i] );                                      //strings base address cant be modified as they are in code segment , memory allocated is in heap segment ,hence strcpy is used
                my_strcpy( name[i],name[j]);
                my_strcpy( name[j],temp );
            }
        }
    }
    free(temp);
}

int my_strcmp(const char *str1, const char *str2 )                    //for comparing the strings
{
    while(*str1 == *str2 )
    {
      if( *str1 != *str2 )
      {
         return *str1-*str2;
      }
      str1++;
      str2++;
    }
    return *str1-*str2;
        
}
char *my_strcpy( char *des,const char *src)                        // swapping cant be done ,hence copying strings
{
    char *ptr=des;
    while(*des++ = *src++);     
    return ptr;                
}
