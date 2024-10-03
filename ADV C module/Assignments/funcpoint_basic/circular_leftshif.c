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
    scanf("%d", &num);                          //read num;
    
    printf("Enter n:");
    scanf("%d", &n);                            //read number of bits to be shifted
    
    ret = circular_left(num, n);                //calling function circular_left with num , n as arguments to be passed
    
    print_bits(ret);                            //calling print_bits function with ret as input
}

int circular_left( int num, int n )
{
     return (num << n) | (unsigned int)num >> (32-n);    //doing BITWISE OR -leftshifting num n times , rigthshifting num with 32-n times
}

int print_bits( int number )
{   
    printf("Result in Binary:");
    for( int i=31 ; i>=0 ; i-- )                       //loop for printing bits after circularleft shift
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
