/*Documentation
NAME:Vinotha sambath
DATE:6.2.2023
DESCRIPTION:program to Generate consecutive NRPS of length n using k distinct character
SAMPLE INPUT:
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
SAMPLE OUTPUT:Possible NRPS is abcbca
 */

#include <stdio.h>

void nrps(char [], int, int);

int main()
{
     int c,n,flag=0;

     printf("Enter the number of characters C :");
     scanf("%d",&c);

     printf("Enter the length of the string N :");
     scanf("%d",&n);

     getchar(); 

     char arr[c];

     printf("Enter %d distinct characters :",c);

     for(int i=0 ; i < c ;i++ )
     {
     scanf(" %c",&arr[i]);                     //reading characters 
     }
     
     for (int i = 0; i < c; i++) 
     {
       for (int j = i + 1 ; j < c ; j++) 
       {
         if (arr[i] == arr[j])                //if characters are repeated
         { 
            flag=1;
            break;
         }
       }
     } 
     if ( flag == 1 )
     {
           printf("Error: Enter distinct characters\n");         //prints error
     }
     else
     {
            nrps( arr , c , n );                              //if char are distinct call the function
     }
     return 0;
}

void nrps(char *str , int c ,int n )
{
    printf("possible NRPS is " ); 
    
    int Index = 0;                                      //initialize 2 varriable to print the character and keep the count
    int Count = 0;
    
    for (int i = 0; i < n; i++) 
    {
        printf("%c", str[Index++]);                     //print the character
        Count++;
    
        if (Index == c)                                 //if the index = no of characters     
        { 
            Index = 0;                                  //set the index to 0
        }
        
        if (Count == c)                                 //if count == c
        {
            printf(" ");
            Count = 0;                                  //reset the count
            Index++;                                     //increment the index

            if ( Index == c )                            //if the index reached the last char
            {
                Index = 0;                               //set the index to 0
            }
        }
    }
    printf("\n");
}
