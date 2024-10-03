/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
*/
    
#include<stdio.h>

int main()
{
    /*
   int ret;
   char ch[]="this is confusing";
   ret=printf("the string is %s\n", ch);                         //ret=count or number of char printed on stdout including \n at end 
   printf("return value of string printf %d\n", ret);
   
   int res=printf("the char is %c\n", ch[0]);
   printf("char return is %d\n",res);
   
   int arr[]={1,2,3,4,5,6,7,8,9};
   int ret1=printf("the element is %d\n",arr[1]);
   printf(" return value of int array printf is %d\n", ret1);
   
   int ret2=printf("2 elemts are %d %d\n", arr[0],arr[3]);
   printf("return of 2 element printf is  %d\n", ret2);

   float x=1.1;
   int ret3=printf("float is %f\n", x);
   printf("the return value of float printf is %d\n", ret3);
*/

   int num;
   char ch;
   float flo;
   
   scanf("%d %f %c", &num,&flo,&ch );       //for float e and E will be taken
   printf ("%d %f %c\n", num,flo,ch);

   return 0;

}  




