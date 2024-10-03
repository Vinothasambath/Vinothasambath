#include<stdio.h>
#include<stdlib.h>

int sa(const void *a, const void *b);
int sd(const void *a, const void *b);
void print(int *a, unsigned int size);

int sa(const void *a, const void *b)       //see the syntax of qsort ,its the formate for comparing pointer
{
     return *(int *) a > *(int *) b;               //swapping is done by function ,here it just compares , returns 0 or 1
}

int sd(const void *a, const void *b)
{
     return *(int *) a < *(int *) b;
}

void print(int *a, unsigned int size)
{
     int i = 0;
     for (i = 0; i < size; i++)
     {
         printf("%d ", a[i]);
     }
     printf("\n");
}

int main()
{
    int a[5]={9,2,6,1,7};

    qsort(a,5,sizeof(int),sa);         //sa is fn pointer
    printf("Ascending :");
    print(a,5);
    
    qsort(a,5,sizeof(int),sd);      
    printf("Descending :");
    print(a,5);
    return 0;
}

