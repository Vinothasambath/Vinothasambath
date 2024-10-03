/*Documentation
NAME:Vinotha sambath
DATE:4.1.2023
DESCRIPTION:program to find the square and cube of a number using pass by refrence
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

void sqr_cube ( int *, int *, int );

int main()
{
    int num;
    int sqr=0 ,cube=0;
    
    printf("ENTER A NUMBER ");
    scanf("%d",&num);
    
    sqr_cube( &sqr, &cube, num);           //funct called with address of sqr,cube and int num;
    
    printf("THE SQUARE OF NUM IS %d\n",sqr);
    printf("THE CUBE OF NUM IS %d\n" ,cube);

    return 0;
}

void sqr_cube ( int *ptr , int *ptr1 , int n )     //ptr and ptr1 are pointer variables
{
    *ptr=n*n;                        //dereferncing address storedin ptr and storing n* n value
    *ptr1=n*n*n;                     //similarly for ptr1
} 
