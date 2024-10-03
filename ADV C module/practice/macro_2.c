//function like macro
//see the difference if the macro definition works if paranthesis is given 

#include <stdio.h>
//#define SET_BIT(num, pos)    num | (1 << pos)
#define SET_BIT(num, pos)     (num | (1 << pos))       


int main()
{
    printf("%d\n", 2 * SET_BIT(0, 2));
    return 0;
}
