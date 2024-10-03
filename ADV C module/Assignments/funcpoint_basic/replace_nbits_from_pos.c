/*Documentation
NAME:Vinotha sambath
DATE:6.1.2023
DESCRIPTION:program to to put the (b-a+1) lsb’s of num into val[b:a]
SAMPLE INPUT:
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
SAMPLE OUTPUT:
Result : 158
 */

#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);                 //Function prototype

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter the value of 'num':");
    scanf("%d", &num);
    printf("Enter the value of 'a' :");
    scanf("%d", &a);
    printf("Enter the value of 'b' :");
    scanf("%d", &b);
    printf("Enter the value of 'val':");
    scanf("%d", &val);
    
    res = replace_nbits_from_pos(num, a, b, val);              //calling function with num, a ,val as inputs for fuction 
    
    printf("Result = %d\n", res);                              //function returning value is saved in result variable and displayed
}

int replace_nbits_from_pos( int num ,int a , int b, int val )
{
    int n=b-a+1;                                               //n =position-no.of.bits+1
    int clear_bits= val & ~(((1<<n)-1) << b-n+1);              //clearing bits from val 
    int get_bits= num & ((1<<n)-1 );                           //getting bits from num
    return clear_bits | (get_bits << b-n+1);                   //merging the getbits of number at cleared position of value
    
}

  

