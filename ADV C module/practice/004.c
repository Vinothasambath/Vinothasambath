#include<stdio.h>

int main()
{
    char  *arr[3]={"Array" ,"of", "strings"};
    char * ptr=&arr;
    printf("%s\n",ptr[1]);
}
