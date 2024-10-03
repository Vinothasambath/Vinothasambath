//finding the average of all command line arguments


#include<stdio.h>
int my_atoi( const char * );

int main( int argc , char **argv )
{
    int i ;
    float sum=0;
    if ( argc > 1 )
    {
    for( i=1; i<argc ; i++ )
    {
        sum=sum+my_atoi(argv[i]);
    }

    printf("Avg : %f\n",sum/(argc-1));
    }
    else
    {
        printf("NO CLA's\n");
    }
    return 0;
}

//
int my_atoi( const char *str )
{
    int flag=0,i=0,num,res=0;
    if( str[i] == '-' )
    {
        flag=1;
        i++;
    }
    else if ( str[i] == '+' )
    {
        flag=0;
        i++;
    }
    while( str[i] >= 48 && str[i] <= 57 )
    {
        num=str[i]-48;
        res=res*10+num;
        str++;
    }
    if(flag == 1)
    {
        res=res*(-1);
    }
    return res;
}

