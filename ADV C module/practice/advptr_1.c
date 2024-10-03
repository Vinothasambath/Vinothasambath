#include<stdio.h>
/*
void fun(int *p) 
{ 
  int q = 10; 
  p = &q;         //here the pointer is assigned with diff address
}     
   
int main() 
{ 
  int r = 20; 
  int *p = &r;      
  fun(p);
  printf("%d\n", *p);   //local ptr is still unchanged
                      //so prints 20 itself
  return 0; 
}

*/
void fun(int **p) 
{ 
  int q = 10; 
  *p = &q; 
}     
   
int main() 
{ 
  int r = 20; 
  int *p = &r; 
  fun(&p); 
  printf("%d", *p);    //here the pointer is holding &q is changed
  return 0; 
} 

