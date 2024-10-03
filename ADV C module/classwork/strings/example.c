#include<stdio.h>

int main()
{
    static char s[25] = "The cocaine man";
    int i=0;
    char ch;
    
    ch = s[++i];
    printf("%c", ch);   //h
    
    ch = s[i++];
    printf("%c", ch);   //h
    
    ch = i++[s];
    printf("%c", ch);   //e
    
    ch = ++i[s];       // space+1 = 33(!)
    printf("%c", ch);
    
    printf("\n");
    
    return 0;
}
