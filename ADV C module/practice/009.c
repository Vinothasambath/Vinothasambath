#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *a = calloc(6,1);    
    for (int i=6; i--;)
    memset(a+5-i,53-i,1);
    printf("%s",a);

    printf("\n");
    
    bzero(a+3,3);
    printf("%s",a);
    return 0;
}
