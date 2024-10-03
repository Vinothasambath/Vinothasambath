/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int * )malloc(1);
    *(double *)ptr=10.0;
    printf("%lf\n",*(double *)ptr);
}
