/*Documentation
NAME:Vinotha sambath
DATE:24.1.2023
DESCRIPTION: count no. of characters, words and lines, entered through stdin
SAMPLE INPUT:
Hello world
Dennis Ritchie
Linux
SAMPLE OUTPUT:
Character count : 33
Line count : 3
Word count : 5
 */

#include<stdio.h>
int main()
{
    char ch,prev_char=' ';

    int char_count=0,word_count=0,line_count=0;

    while ( (ch=getchar()) != EOF)       //getting the characters from stdin using getchar func, save to char variable ch 
                                         //loop runs if ch not equal to EOF
    {
        char_count++;                    //all characters till EOF are taken in char_count,till cond fails
        

        if( (prev_char != ' ' && prev_char != '\n' && prev_char != '\t') && ( ch == ' ' || ch == '\t' || ch == '\n' ))
        {
            word_count++;                //checks current character and prev character for word count then ,incre word count
        }
        
        if( ch == '\n' )
        {
            line_count++;               //increm line-count
        }

        prev_char=ch;                   //saving the ch to variable prev_ch 
    }


    if( ch == EOF && prev_char != '\n' )
    {
        word_count++;
    }

    printf("Character count : %d\nLine count : %d\nWord count : %d\n",char_count,line_count,word_count);


    return 0;
}






    

