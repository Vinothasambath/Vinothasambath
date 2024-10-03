#include<stdio.h>
 
int main()
{
    char *s = "Geeks Quiz";
    int n = 7;
    printf("%.*s", n, s);
    return 0;
}

//printf statement is seen as (%0.7s") 0-->total preciisiom to right ,7 --> no of characters to be printed 

//in printf *-->passing that arg value
//in scanf *-->ignore reading it
