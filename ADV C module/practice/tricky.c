#include <stdio.h>
void print_array(int row, int col, int *p)    //received in single level pointer
{
     int i, j;
     for (i = 0; i < row; i++)
     {
         for (j = 0; j < col; j++)
         {
              printf("%d ", *((p + i * col) + j)); 
         }
         printf("\n");
     }
}
int main()
{
     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
     print_array(2, 3, (int *) a);        //telling the compiler to think it as 1d array
     return 0;
}
