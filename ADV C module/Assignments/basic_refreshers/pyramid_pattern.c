/*Documentation
NAME:Vinotha sambath
DATE:19.12.2022
DESCRIPTION:program to print pyramid pattern 
SAMPLE INPUT:Enter the number: 4
SAMPLE OUTPUT:
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
 */

#include<stdio.h>

int main()
{
    int num, i, j;                                      
    printf("Enter the number:");
    scanf("%d",&num);
                                                         //UPPER TRIANGLE PART
    for( i=num ; i>=1 ; i-- )                            //i loop starts with num values and runs till i is >= , decremented for each iter
    {
        for ( j=i; j<=num; j++ )                        //j runs for num times starting with i value,j increments by 1 till j<=num
        {
               
            printf("%d ",j);                            //prints j value
          
        }

        printf("\n");                                   //prints new line after j loop is completed
    } 

    for( i=2 ; i<=num ; i++ )                            //LOWER PART
    {
        for ( j=i; j<=num; j++ )                         //similar to above nested loops but i starts from 2 with incrementation
        {
               
            printf("%d ",j);                             //prints j value
          
        }

        printf("\n");                               
    }
    
    return 0;
}

