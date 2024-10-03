
#include<stdio.h>  

int main(int argc ) 
{
    static int i=0;
     
     if( i >= 0 && i <= 3 )
     {
       
         printf("i value is %d\n",i);
         i++;
         printf("argc %d\n",argc);
         argc++;
         main(  25 );
        
     }

return 0;  
} 

