#include<stdio.h>
#include<stdlib.h>

int main( int argc, char **argv, char **envp)
{
    setenv("array","1 2 3 4 5",0);      //create envp ,dont overwrite it present
                                      //create if non existing
    char *ptr;
    ptr=getenv("array");              //if envp is not found then getenv return NULL
    if(ptr == NULL )
    {
        printf("Env is not found\n");
    }
    else
    {
        printf("%s\n",ptr);
    }

    setenv("array","x y z a b c",1);   //in above step envp array is created ,here 1 is given hence it overwrites   
    ptr=getenv("array");
    printf("%s\n",ptr);
    
    return 0;
}
