//register example

#include <stdio.h>


/*
int main()
{
    register int i = 10;    //both in variable and pointers inregisters
    register int *j = &i;   //here pointer is requesting for register variable i address ,so error

    printf("*j %d\n", *j);  
    

    return 0;
}

*/


int main()
{
    int i = 10;    //i is a normal variable
    register int *j = &i;  //saving the i address to register pointer is ok
    printf("*j %d\n", *j);
    return 0;
}
