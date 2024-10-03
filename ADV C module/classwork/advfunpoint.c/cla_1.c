
#include<stdio.h>  
#include<stdlib.h>

int main(int argc, char **argv) 
{
     static int i=0;
      char *ptr[4]={"BOLD","BEAUTIFUL","BELIEVE","BRAVE"};
     //printf("argument is %s\n",argv[i]);   
     
     if( i >= 0 && i <= 3 )
     {
       
         printf("i value is %d\n",i);
         printf("string inside  %s\n",ptr[i]);   
         main(  i ,&ptr[i++] );
        
     }

return 0;  
} 

