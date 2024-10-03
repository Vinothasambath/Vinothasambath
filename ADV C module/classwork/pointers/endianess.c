//CHECKING ENDIANESS OF THE SYSTEM
#include<stdio.h>

int main()
{
    int num=0x12345678;
     
 //   int *iptr=&num;
 //   char *cptr=&num;               //avoid warning by using a void pointer
    
    void *ptr=&num;                //without type casting deref void pointer is NULL;
    //in gcc size of void for pointer arithmetic =1; ptr++ ; allowed only once

 //   if(*cptr == 0x78)                
      if(*(char *)ptr == 0x78 )
    {
        printf("LITTLE ENDIAN\n");
        printf("%x\n",*(char *)ptr);
        printf("%x\n",*(short *)ptr);
    }
    else
    {
        printf("BIG ENDIAN\n");
       // printf("%x\n",*ptr);
    }
    return 0;
}



