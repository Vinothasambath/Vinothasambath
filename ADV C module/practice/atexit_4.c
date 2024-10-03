#include<stdio.h>
#include<stdlib.h>
void test(void);
void my_exit(void);

static int *ptr;          //global pointer//data segment .bss

void my_exit(void)
{
     printf("Exiting program\n");
     if (ptr)
     {
                                     /* Deallocation in my_exit */
         free(ptr);
     }
}

void test(void)
{
      puts("In test");
      exit(0);
}

int main()
{
    atexit(my_exit);
    ptr=malloc(100);
    test();
    printf("hello\n");
    return 0;
}

