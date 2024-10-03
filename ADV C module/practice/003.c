#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/*
int main()
{
    char *ptr;        //pointer in stack
    ptr=malloc(10);   //pointing to mem block in heap
    ptr="hello";      //now its pointing to hello in code,heaps address is lost,memory is leaked
    
    puts(ptr);
    return 0;
}
  

// hence to copy string in heap use strcpy   
int main()
{
    char *ptr=malloc(10);  //heap
    strcpy(ptr,"Hello");   //string copied to heap
    puts(ptr);
}    

*/

int main()
{
   // char ptr[20];          //arrray works
      char *ptr;             //segmentation fault
    strcpy(ptr,"HELLO");
    puts(ptr);
}



