/*Documentation
NAME:Vinotha sambath
DATE:7.1.2023
DESCRIPTION:program to implement Circular left shift
SAMPLE INPUT:
Enter num: 12
Enter n : 3
SAMPLE OUTPUT:Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    ret = circular_left(num, n);
    
    print_bits(ret);
}

int circular_left( int num, int n )
{
     return (num << n) | (unsigned int)num >> (32-n);
}

int print_bits( int number )
{
    for( int i=31 ; i>=0 ; i-- )
    {
        if (number & (1<<i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}
