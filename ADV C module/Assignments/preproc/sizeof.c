/*Documentation
NAME:Vinotha sambath
DATE:19.2.2023
DESCRIPTION:to define a macro SIZEOF(x), without using sizeof operator
SAMPLE INPUT:none
SAMPLE OUTPUT:
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
 */
#include<stdio.h>

#define SIZEOF(x) (char *)(&x+1)-(char *)&x                            //macro defined ,expression is replaced at the function call
                                                                      //address is typecasted to char ,sizeof all datatypes can be found 
int main()
{
        int num;
        char ch;
        short int sh;
        float fl;
        double dou;
        unsigned int ui_num;
        long int li_num;
        long double ld_num;
        long long ll_num;
       
       printf("Size of int : %ld\n",SIZEOF(num));
       printf("Size of char : %ld\n",SIZEOF(ch));
       printf("Size of short : %ld\n",SIZEOF(sh));
       printf("Size of float : %ld\n",SIZEOF(fl));
       printf("Size of double : %ld\n",SIZEOF(dou));
       printf("Size of unsigned int : %ld\n",SIZEOF(ui_num));
       printf("Size of long int : %ld\n",SIZEOF(li_num));
       printf("Size of long double : %ld\n",SIZEOF(ld_num));
       printf("Size of long long : %ld\n",SIZEOF(ll_num));
       return 0;
}
