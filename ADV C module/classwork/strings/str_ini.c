 //STRING INITIALIZATION


#include<stdio.h>
int main()
{
    char char_array[5] = {'H', 'E', 'L', 'L', 'O'};        //Character Array -not string
    
    char str1[6] = {'H', 'E', 'L', 'L', 'O', '\0'};           //String
    
    char str3[6] = {“H”, “E”, “L”, “L”, “O”}; //Invalid-each is considered as string

    char str4[6] = {“H” “E” “L” “L” “O”};  //Valid ,without comma concatenation happens
    char str2[] = {'H', 'E', 'L', 'L', 'O', '\0'}; //Valid-ends with null
    char str5[6] = {“HELLO”};   // Valid-array
    char str6[6] = “HELLO”;     // Valid-array
    char str7[] = “HELLO”;      //Valid-arrray
    char *str8 = “HELLO”;       //Valid-pointer
    return 0;
}

