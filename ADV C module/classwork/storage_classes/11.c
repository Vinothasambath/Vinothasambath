//practice

#include<stdio.h>
int main()
{

    int i=0;
    int j=5;
    register char arr[]="hello";
    arr[0]='x';   //these are fine
    arr[2]='H';
   // arr[j]='9';  //using var inside arr index -->error

    printf("i is %d\n",i);
    printf("array value is %c\n",arr[0]);
    printf("array value is %c\n",arr[2]);
   // printf("array value is %c\n",arr[5]);
   //cant print and read into array or string as they uses base address
    return 0;
}


