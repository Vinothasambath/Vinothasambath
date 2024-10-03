

#include <stdio.h>
#include <ctype.h>

//getchar() ,putchar -----by default stdin and stdout
/*
int main()
{
    int ch;
    for ( ; (ch = getchar()) != EOF; )
    {
        putchar(toupper(ch));
    }  
    puts("EOF Received");
    return 0;
}
*/
//getc(),putc() ---mention stream

int main()
{
int ch;                    //use integer variable always
for ( ; (ch = getc(stdin)) != EOF; )
{
putc(tolower(ch), stdout);
}
puts("EOF Received");
return 0;
}

