#include<stdio.h>
#include<stdlib.h>

int main( int argc, char **argv, char **envp)
{
    setenv("USER","1 2 3 4 5",1);    //USER --> default env var 
                                     //0 -> given default one is printed 
                                     // 1 -> it will not overwrte the default one ,but created temp var in seconondary environment
    char *ptr;
    ptr=getenv("USER");            
    if(ptr == NULL )
    {
        printf("Env is not found\n");
    }
    else
    {
        printf("ENVIRONMENTAL VARIABLE IS %s\n",ptr);
    }
    return 0;
}
