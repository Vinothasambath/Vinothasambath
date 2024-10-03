/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:to implement strcpy()
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>
char *my_strcpy( char *des,const char *src)    //dest is not constant because we are going to copy char into it ,so modifiable
{
    char *ptr=des;
    while(*des++ = *src++);     //assigning then checking condition
    return ptr;                //since dest will be pointing at null,base address of dest is givewn to ptr in  begining itself
    
}

/* about code can be given as 
  while(*src)
  {
  *des=*scr;
  des++;
  src++
  }
  *des=*src;  //null should be added at end becoz when *src=\0 ,while(0) --loop terminates
  */
int main()
{
    char str1[20];
    puts("Enter the string");
    fgets(str1,20,stdin);

    char str2[20];
    
    my_strcpy(str2,str1);       //destination , source
    printf("copied : %s\n", str2);
    return 0;
}

