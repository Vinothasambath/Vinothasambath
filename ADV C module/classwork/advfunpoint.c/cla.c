//pgm to print all command line arguments

#include<stdio.h>
int main( int argc , char *argv[] ) 
{
    int i;
    for( i=0; argv[i] != NULL; i++ )      // i<argc 
    {
        printf("argv[%d]=%s\n",i,argv[i]);        //first level dereferencing 
    }
    return 0;
}



//note:to pass space as argument give it in "" or ''
