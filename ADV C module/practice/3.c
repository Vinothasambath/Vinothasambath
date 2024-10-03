#include<stdio.h>
void foo(int *p);

int main()
{
    static int i=97;
     int  *p=&i;
    foo(&i);
    printf("%d\n",*p);
}
void foo(int *p)
{
   // int j=2;
   // p=&j;               //*p=&i is writing address of j inside the pointer ,so it will throw error
    printf("%d\n",*p);
}


