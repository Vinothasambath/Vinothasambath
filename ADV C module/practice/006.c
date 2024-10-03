#include<stdio.h>

int main()
{
    short double *p1=(short *)1000;
    short double *p2=(short *)1020;   
    printf("%ld\n",p1-p2);     // 1000-1020/sizeof datatype of ptr =-20/2=-10 
    printf("%ld\n",p2-p1);
    
    return 0;
}
