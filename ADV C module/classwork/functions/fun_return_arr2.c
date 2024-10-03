/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include <stdio.h>

int *return_array(void);
void print_array(int *array, int size);

int main()
{
     int *array_val;
     array_val = return_array();
     print_array(array_val, 5);
     return 0;
}

void print_array(int *array, int size)
{
     int iter;
     for (iter = 0; iter < size; iter++)
     {
         printf("Index %d has Element %d\n", iter, array[iter]);
     }
}

int *return_array(void)
{
     static int array[5] = {10, 20, 30, 40, 50};  //though array is declared in differnt fun ,it is used as static ,so it will be avail throughout the prog execution , static --> saved in data seg not on stack frames
     return array;
}
