/*Documentation
NAME:Vinotha sambath
DATE:10.2.2023
DESCRIPTION:convert Little Endian data to Big Endian
SAMPLE INPUT:
Enter the size: 2
Enter any number in Hexadecimal: ABCD
SAMPLE OUTPUT:After conversion CDAB
 */

#include<stdio.h>

void endianess(char *ptr,int size)             //address accessed using char pointer
{
    
    for( int i=0; i<size/2 ; i++ )            //swapping the bytes using a char pointer
    {
        char temp=ptr[i];
        ptr[i]=ptr[size-1-i];
        ptr[size-1-i]=temp;
    }
}
int main()
{
    unsigned int size,num;

    printf("Enter the size: ");                //reading size
    scanf("%d",&size);

    printf("Enter any number in Hexadecimal: ");  
    
    if ( size == 2 )
    {
       scanf("%hx",(short *)&num);            //if size=2,read the num as short (allocate 2 bytes)
    }
    else if ( size == 4 )
    {
        scanf("%x",&num);                     //if the size=4,read it as  int (allocate 4 bytes)
    }
    
    endianess((char *)&num, size);            //calling function %passing address of num --can be access using char pointer(type casted)
 
    printf("After conversion %X\n",num); 
 
    return 0;
}
