/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>
int main()
{
    
    char ch;
    int  i;
    float t;
    printf("size of char,int,float is %lu ,%lu ,%lu ",sizeof(char),sizeof(int),sizeof(float));
    return 0;                                //char 1 ,int complier dependent ,%lu for 64bit system so to adjust the bitness use %zu
}
