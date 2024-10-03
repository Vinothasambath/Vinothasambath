#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("%c\n", ++*argv[2] );
    printf("%c\n", *++argv[2] );
    printf("%c\n", *argv[2]++ );
    return 0;
}
