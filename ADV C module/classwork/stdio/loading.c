/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:progress bar
SAMPLE OUTPUT:
Loading [----------------------------------------------------------------------                 ] 50%
 */

#include <stdio.h>
#include<unistd.h>
int main ( )
{
            
    
    int i,count=0;
    while ( count < 100 )
    {
     int barwidth=50;
    
     printf("LOADING [");

       for ( i = 0 ; i < barwidth; ++i ) 
       {
            if ( i <= count/2 )               //if barwidth =100; check i <= count
            {
            printf("-");
            }
            else
            {
                printf(" ");
            }
       }

     printf("] %d%c\r", count+=2,'%');
     sleep(1);
     fflush(stdout);
    }


    return 0;

}
