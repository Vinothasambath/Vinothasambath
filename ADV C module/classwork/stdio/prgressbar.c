/*Documentation
NAME:Vinotha sambath
DATE:18.1.2023
DESCRIPTION:to print the command line progress bar
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>
#include<unistd.h>

int main ()
{
    int percent = 0;
    while (percent < 100)
    {
    int barWidth = 100;

    printf("Loading[");
    
    for ( int i=0 ; i<barWidth; ++i )  
    {
        if ( i <=  percent )
        {
            printf("-");
        }
        else
        {
            printf(" ");
        }
      
    }
    printf("]");
    printf(" %d%c\r", percent+=2, '%');
    sleep(1);
    fflush(stdout);
    }
     return 0;
}
