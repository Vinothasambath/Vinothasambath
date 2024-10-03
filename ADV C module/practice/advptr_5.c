#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
void fun(char** str_ref)
{
    str_ref++;             //if  (*str_ref)++; then eeksQuiz will be printed
}
 
int main()
{
    char *str = (void *)malloc(100*sizeof(char));
    strcpy(str, "GeeksQuiz");
    fun(&str);
    puts(str);                 //prints the same
    free(str);
    return 0;
}
