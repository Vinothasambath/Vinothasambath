#include <stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int *ptr = (int *)(&a+1);
    printf("%d %d\n", *(a+1), *(ptr-1));
    return 0;
}

//*(a+1)=*(base addr+1*sizeofint)=*(next element)=2
//ptr--> given to &a+1 -->which is next to entire array(int *) 4 bytes are dereferenced --->*(ptr-1)=5



