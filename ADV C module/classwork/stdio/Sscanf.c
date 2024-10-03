/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include <stdio.h>
int main()
{
int age,new_age;
char array_1[10];
char array_2[]= "I am 25 years old";

sscanf("Iam 30 years old", "%s %d", array_1, &age);
//directly give input

sscanf(array_2,"%*s %*s %d", &new_age); //or through anyother stream like array
           
printf("age: %d\nnew age:%d\n",age,new_age);
return 0;
}
