//preprocessing example

static int num=10;            //global var gets mem allocated even before preproccessing

#include<stdio.h>

#define VAR 100

int main()
{
    int x=10;
    char ch;
    char *str="world is Enigma";

    printf("The number is %d\n",x);
    printf(str);
    printf("\n");
    printf("SIZEOF NUM:%zu\n",sizeof(++num));
    printf("the num is %d\n",num);
    
    printf("MACRO:%d\n",VAR/x);

    return 0;
}

