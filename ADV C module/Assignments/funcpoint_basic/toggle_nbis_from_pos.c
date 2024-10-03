/*Documentation
NAME:Vinotha sambath
DATE:3.1.2023
DESCRIPTION:program to toggle 'n' bits from given position of a number
SAMPLE INPUT:
Enter the number: 10
Enter number of bits: 3
Enter the pos: 5
SAMPLE OUTPUT:Result = 50
 */

#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);                         //function prototype

int main()
{
    int num, n, pos, res = 0;                                 
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    printf("Enter number of bits:");
    scanf("%d", &n);
    
    printf("Enter the position: ");
    scanf("%d", &pos);
    
    if( pos >= n )
    {
        res = toggle_nbits_from_pos(num, n, pos);                //function call with num n and pos as inputs ,
                                                              //returned value is saved to variable res
    
        printf("Result = %d\n", res);
    }
    return 0;
}

int toggle_nbits_from_pos( int num, int n, int pos )             //function definition
{
    return ( num ^ (((1<<n)-1) << (pos-n+1)) );                  //num  XOR with mask(1<<n)-1 again << pos-n+1 and returned

}
