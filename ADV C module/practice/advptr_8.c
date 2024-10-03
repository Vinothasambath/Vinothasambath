#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i;
    int *ptr = (int *) malloc(5 * sizeof(int));  //20bytes
 
    for (i=0; i<5; i++)
        *(ptr + i) = i;           //ptr[i]=i   ptr={ 0 , 1 ,2 ,3,4}
 
    printf("%d ", *ptr++);    //*(ptr)=0 , then ptr++
    printf("%d ", (*ptr)++);  //(*ptr)=1 , then 1++
    printf("%d ", *ptr);      // 2
    printf("%d ", *++ptr);    //*(++ptr)=2
    printf("%d ", ++*ptr);    //++(*ptr)=++2=3
}
