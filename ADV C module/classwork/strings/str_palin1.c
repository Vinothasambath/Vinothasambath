/*Documentation
NAME:Vinotha sambath
DESCRIPTION:palindrome or not using simple while loop
 */
#include<stdio.h>
int main()
{
    char str[25];
    puts("ENTER A STRING");
    scanf("%s",str);

    int left = 0;
    int right = strlen(str) - 1;
 
    while (right > left)
    {
        if (str[left++] != str[right--])
        {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
 
    printf("%s is a palindrome\n", str);
    return 0;
}
