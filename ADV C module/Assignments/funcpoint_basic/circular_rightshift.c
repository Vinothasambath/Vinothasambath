/*Documentation
NAME:Vinotha sambath
DATE:7.1.2023
DESCRIPTION:program to implement Circular right shift
SAMPLE INPUT:
Enter num: 12
Enter n : 3
SAMPLE OUTPUT:Result in Binary: 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
*/

#include <stdio.h>

int circular_right(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);                          //read num;
    
    printf("Enter n:");
    scanf("%d", &n);                            //read number of bits to be shifted
    
    ret = circular_right(num, n);                //calling function circular_right with num , n as arguments to be passed
    
    print_bits(ret);                            //calling print_bits function with ret as input
}

int circular_right( int num, int n )
{
     return (unsigned int)num >> n | num << (32-n);    //doing BITWISE OR -rightshifting num n times , leftshifting num with 32-n times
}

int print_bits( int number )
{   
    printf("Result in Binary:");
    for( int i=31 ; i>=0 ; i-- )                       //loop for printing bits after circular right shift
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
