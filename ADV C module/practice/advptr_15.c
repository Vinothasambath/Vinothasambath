#include<stdio.h>
 
int main() {
    short a = 320;
    char * ptr;
    ptr = (char * ) & a;
    printf("%d", * ptr);     //little indian system
    return 0;
}
