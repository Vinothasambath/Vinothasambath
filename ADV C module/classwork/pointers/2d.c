


#include <stdio.h> 
int main ()  { 
    int  a[4][5] = {{1, 2, 3, 4, 5}, 
                    {6, 7, 8, 9, 10}, 
                    {11, 12, 13, 14, 15}, 
                    {16, 17, 18, 19, 20}}; 
    printf("%dn", *(*(a+**a+2)+3)); 
    return(0); 
}  


/* OUTPUT 

= *(*(a+**a+2)+3))
= *(*(1000+**1000+2)+3))
= *(*(1000+3)+3))   {given element **1002 = 3}
= *(*(1003)+3))
= *((1003)+3)    {4th row selected in given matrix}
= *((1003)+3)     {address of 4th element in 4th row}
= a[3][3]
= 19            {element selected a[3][3] = 19}

*/
