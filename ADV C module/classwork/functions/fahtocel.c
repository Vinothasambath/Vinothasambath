/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:fahrenheit to celsius conversion
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>

float celsius( float f )
{   
   
     return (f-32)*5/9;
    
}

int main()
{
    float fah, cel;
    printf("Enter temperature in the Fahrenheit: ");
    scanf("%f", &fah);
    cel=celsius(fah);
    printf("the celsius value is %f ",cel);
    return 0;
}

