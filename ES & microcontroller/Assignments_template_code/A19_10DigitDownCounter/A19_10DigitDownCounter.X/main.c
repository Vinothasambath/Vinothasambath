#include <xc.h>
#include "main.h"
#include "clcd.h"

static void init_config(void)
{
    init_clcd(); //configure the clcd
}

void main(void)
{
    init_config();

	int wait = 10000;
	char str[] = "9999999999";

    //Print a given message on LINE1
	clcd_print(".........", LINE1(0));
    clcd_print("Count:", LINE2(0));
    clcd_print(str, LINE2(6));
    while (1)
    {
		if (wait-- <= 0)
		{
			wait = 10000;
		
			/* Loop checks the each character of 10 digit down counter */
			for (int i = ; i <  ; i++)  //Complete this for loop with correct conditions
			{
				if (str[i] < '0') //Once the string character become less than '0' i-e < '0' 
				{
					//previous value of character is decrementing
					
					str[i] = '9';
				 
				}
			}
               //Write string to clcd in line 2
			
			str[9]--;
		}
    }
}







