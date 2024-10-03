#include<stdio.h>
#include<stdarg.h>

float avg ( int count, ... );
float avg ( int count, ... )
{    
    int i,sum=0;
    
    va_list vptr;

    va_start(vptr, count);

    for(i=0; i<count; i++)
    {
        sum=sum+va_arg(vptr,int);         //int num=va_arg(vptr,int)
    }                                  //sum+=num;
    va_end(vptr);
    return ((float)sum/count);
}

int main()
{
    float res=avg(5,1,2,3,4,5);    //usually give first argument as no of arg going to be passed

    printf("the average is :%f\n",res);
    
    return 0;
}
