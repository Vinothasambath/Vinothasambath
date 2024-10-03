/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:palindrome or not
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation*/

#include<stdio.h>
int main()
{
    int num, remainder=0, reverse=0, temp;
    printf("Enter the number: ");
        scanf("%d",&num);
        temp=num;

        while ( num > 0 )
        {
            remainder=num % 10;
            reverse=(reverse * 10) + remainder;
            num=num/10;                            //can also be denoted bt num/=10;
        }
        if ( temp == reverse )
        
            printf(" Number %d is a palindrome\n" ,temp);
       
            else
            
                printf("Number %d is NOT a palindrome\n", temp);
        
        return 0;
}
