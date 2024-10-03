/*Documentation
NAME:Vinotha sambath
DATE:3.1.2023
DESCRIPTION:program to get 'n' bits from given position of a number
SAMPLE INPUT:
Enter the number: 12
Enter number of bits: 3
Enter the pos: 4
SAMPLE OUTPUT:Result = 3
 */

#include <stdio.h>

int get_nbits_from_pos(int, int, int);                         //function prototype

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
        res = get_nbits_from_pos(num, n, pos);                //function call with num n and pos as inputs ,
                                                              //returned value is saved to variable res
    
        printf("Result = %d\n", res);
    }
    return 0;
}

int get_nbits_from_pos( int num, int n, int pos )             //function definition
{
    return ( num & (((1<<n)-1) << (pos-n+1)) ) >> (pos-n+1);  //num &with mask(1<<n)-1 again << pos-n+1 
                                                              // get bits are >> pos-n+1 and returned 

}
