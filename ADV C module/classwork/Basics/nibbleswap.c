/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:nibble swapping
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
int main()
{
    int num , i, n1, n2 ,new;
    printf("Enter the character or number for nibble swap ");
    scanf("%d", &num);

    printf("\nNIBBLES BEFORE SWAPPING\n");
    
    for( i=0 ; i<=7 ; i++ )
    {
        if(num & 1<<(7-i))
        {
            printf("1");                 //printing bits
        }
        else
        {
            printf("0");
        }

    }
    printf("\n");
    n1=num << 4; 
    n2=num>>4;
    new = n1 | n2 ;
        
    printf("NIBBLES AFTER SWAPPING\n");
    
    for( i=0 ; i<=7 ; i++ )
    {
        if(new & 1<<(7-i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    printf("\n");
    printf("the new number is %d\n",new);
    
    return 0 ;
}

