/*Documentation
NAME:Vinotha sambath
DATE:5.1.2023
DESCRIPTION:to print first 50 natural numbers using recursive function
SAMPLE INPUT:
SAMPLE OUTPUT:
 */

#include<stdio.h>

int natural_num ( int num );

int main()
{
    natural_num(1);
    return 0;
}

int natural_num( int num )
{
        if ( num <=50 )
        {
           printf("%d ",num);
           natural_num(num+1);
        }


}
