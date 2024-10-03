#include <stdio.h>

void print_array(int **p);   //to access values 2nd level deferencing is needed hence **p

int main()
{
  /*   int a = 10;        //addresses are at different locations
       int b = 20;
       int c = 30;
       
       int *ptr[3];      //pointer array holding addresses
       ptr[0] = &a;      //first element
       ptr[1] = &b;
       ptr[2] = &c;  */

       int a = 10,b=20,c=30;
       int *ptr[3] = {&a, &b, &c};           
       
       print_array(ptr);    //func call 
       return 0;
}


void print_array(int **p)
{
        int i;
        for (i = 0; i < 3; i++)
        {
             printf("%d ", *p[i]);
             printf("at %p\n", p[i]);
        }
}
