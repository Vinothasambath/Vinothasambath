


#include <stdio.h>
 
char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};        //array of strings
char **cp[] = {c+3, c+2, c+1, c};                       
char ***cpp = cp;
 
int main()
{
    printf("%s ", **++cpp);                       //*(++cpp)=*(C+2)=TEST
    printf("%s ", *--*++cpp+3);                   //
    printf("%s ", *cpp[-2]+3);
    printf("%s ", cpp[-1][-1]+1);
    return 0;
}

output: TEST sQuiz Z CQ

