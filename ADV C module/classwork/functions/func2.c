/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:pass by value ,pass by refrence example
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include <stdio.h>
/*
//PASS BY VALUE

void modify(int num1)        //return type is void,so no value returned
  {
     num1 = num1 + 1;
  }                         

int main()
  {

      int num1 = 10;
      printf("Before Modification\n");
      printf("num1 is %d\n", num1);
      modify(num1);                    //function just called with argument
      printf("After Modification\n");
      printf("num1 is %d\n", num1);    
      return 0;
  }
*/
//PASS BY REFERENCE

void modify(int *iptr)                //address is received in an pointer
    {
      *iptr = *iptr + 1;             //pointer is deferencing the address ie ) the data in the address is added with 1
    }

int main()
   {
       int num = 10;
       printf("Before Modification\n");
       printf("num1 is %d\n", num);
       modify(&num);
       printf("After Modification\n"); 
       printf("num1 is %d\n", num);     //num1 value is indirectly udated
       return 0;
   }
