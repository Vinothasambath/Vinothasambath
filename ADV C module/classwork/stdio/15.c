#include<stdio.h>


int main()
{

     // printf("%a\n",10.0);

  
    char p[] = "%d\n";
    printf("%s",p);
    p[1] = 'c';
    printf(p, 65);

    // printf(5+"Good Morning\n");
    return 0;

}
