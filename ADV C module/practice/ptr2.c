//pointer to array example

#include<stdio.h>

int main()
{
    int array[3] = {1, 2, 3};
    int *p1;
    int (*p2)[3];              //ptr to an array
    
    p1 = array;               //single level deref
    p2 = &array;              //2level deref
    
    printf("%p %p  %d %p\n", p1 + 0, p2 + 0 ,p1[0],p2[0]);
    printf("%p %p  %d %p\n", p1 + 1, p2 + 1,p1[1],p2[1]);
    printf("%p %p  %d %p\n", p1 + 2, p2 + 2,p1[2],p2[2]);

    return 0;
}
