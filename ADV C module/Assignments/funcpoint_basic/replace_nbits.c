/*Documentation
NAME:Vinotha sambath
DATE:3.1.2022
DESCRIPTION:program to replace 'n' bits of a given number
INPUT:Enter num, n and val:10 3 12
SAMPLE OUTPUT:Result = 12
 */

#include <stdio.h>

int replace_nbits(int, int, int);                       //function prototype

int main()
{
    int num, n, val, res = 0;
    
    printf("Enter num, n and val:");               //reading inputs from user
    scanf("%d%d%d", &num, &n, &val);              // num=number,n= no of bits to be fetched from lsb in num amd val,val =another number
    
    res = replace_nbits(num, n, val);             //fuction call and return value is saved to variable res        
    
    printf("Result = %d\n", res);      
    return 0;    
}

int replace_nbits( int num, int n, int val )
{
    return ( num & ~((1<<n)-1)) | ( val & (1<<n)-1 ) ;      // bits cleared from num is merged with (OR) bitsgot from val 
}

