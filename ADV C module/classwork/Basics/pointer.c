#include <stdio.h>
void test(int *a, int *b) 
{ 
  a = b;       //a and b both pointer now pointing y
  *a = 15;    //changin y value as 15
} 

int x = 10, y = 20; 

int main() 
{ 
  test(&x, &y); 
  printf("%d %d", x, y);   //x value remains same ,y value is 15
  return 0; 
}
