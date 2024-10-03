//POINTER TO AN ARRAY EXAMPLE


#include<stdio.h>



int main()
{
int array[3] = {1, 2, 3};
int *ptr;
ptr = array;                              //perfect 1d array ptr dereferncing
printf("%d\n",*ptr);
return 0;
}

/*
int main()
{
int array[3] = {1, 2, 3};
int (*ptr)[3];                             //compiler warning ,pointer to an array
ptr = array;                               //use &array as pointer will dererf twice
printf("%d\n", **ptr);
return 0;
}
*/
