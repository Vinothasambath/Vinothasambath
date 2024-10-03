#include <stdio.h>


int fun(int arr[]) 
{
   arr = arr+1;     //pointer is now pointing to 20
   printf("%d ", arr[0]); //here first element is considered as //20
}

int main(void) 
{
   int arr[2] = {10, 20};
   fun(arr);
   printf("%d", arr[0]);   //original array has no changes  //10
   return 0;
}
