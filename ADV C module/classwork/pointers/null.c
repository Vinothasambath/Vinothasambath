//NULL pointers


#include<stdio.h>

int main()
{
    int num=10;
    int *n;
    n=NULL;             //good practice to give null,so that illegal access of address cant be done in big programs
    //int *n=NULL;     //or single line


    double x=77.5;
    void *vptr=&x;
    printf("%hhx\n", *(char *)vptr);           //hhx--> short short hexadecimal --> 1 byte //short h--> 2bytes //short short-->1Byte     
    printf("%hhx\n", *(char *)(vptr + 7));
    printf("%hu\n", *(short *)(vptr + 3));
    printf("%x\n", *(int *)(vptr + 0));

    return 0;
}
