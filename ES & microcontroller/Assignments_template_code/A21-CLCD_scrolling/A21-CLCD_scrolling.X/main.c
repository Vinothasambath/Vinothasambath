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

	unsigned int wait = 0;
	char str[16] = "Scrolling Demo  ";

    //Print a given message on LINE1
    clcd_print(str, LINE1(0));
    
    while (1)
    {
		if (wait -- == 0)
		{
            wait = 10000;
            //Take backup of character which we are going to loose after right shift by 1
            
			/* Shift each character from string to right by 1 */
			for (i = X; i > 0; i--) //Complete this for loop with correct conditions.
			{
                str[X] = str[X - 1];				
			}
            //Get 0th Character
            //Print the string after shifting towards right.
			
		}
    }
}

