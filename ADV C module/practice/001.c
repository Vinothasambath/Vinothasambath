/*
#include<stdio.h>
int main()
{
    float x=0.1;
    printf("%d\n",x);
    printf("%f\n",x);
    return 0;
}
*/

#include<stdio.h>

int main(int sizeofargv, char *argv[])
{
    while(sizeofargv)
        printf("%s ", argv[--sizeofargv]);  
    return 0;
}

