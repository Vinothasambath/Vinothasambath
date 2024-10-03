/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
void swap(void *ptr1 ,void *ptr2, int size )
{
    char temp;
    int i;
    for(i=0 ; i< size ; i++ )
    {
        temp=*(char *)ptr1;
        *(char *)ptr1=*(char *)ptr2;
        *(char *)ptr2=temp;
        ptr1++;               //void pointers in gcc can access 1 byte 
        ptr2++;
    }
}

int main()
{
    int num1, num2;
    printf("Enter 2 integers: ");
    scanf("%d %d",&num1,&num2);         //try it with float ,double

    printf("BEFORE SWAP:\n num1=%d ,num2=%d\n",num1,num2);

    swap(&num1,&num2,sizeof(num1));


    printf("AFTER SWAP:\n num1=%d ,num2=%d\n",num1,num2);

    return 0;
}


