
//PRINTF() FUNCTION 

#include<stdio.h>
int main()
{
    //TYPE SPECIFIERS
    printf("%c\n", 'A');
    printf("%d %i\n", 'Z', 10); 
    printf("%o\n", 15);
    printf("%x %X %x\n", 0xA, 0xA, 10);
    printf("%u\n", 255);
    printf("%f %F\n", 1.82646, 2.0);
    printf("%e %E\n", 1.2, 1.2);
    printf("%a\n", 123.4);
    printf("%A\n", 123.4);
    printf("%g %G\n", 1.21, 1.0);
    printf("%s\n", "Hello");
   
     
    //LENGTH SPECIFIERS

     printf("%hX\n", 0xFFFFFFFF);
     printf("%lX\n", 0xFFFFFFFFl);
     printf("%llX\n", 0xFFFFFFFFFFFFFFFF);
     printf("%Lf\n",1.23456789L);


     //WIDTH SPECIFIERS
    
     printf("%3d %3d\n", 1, 1);         //right allignment
     printf("%3d %3d\n", 10, 10);      
     printf("%3d %3d\n", 100, 100);    //data is given preferece
     printf("%10s\n", "Hello");     
     printf("%20s\n", "Hello");
     printf("%*d\n", 1, 1);           //first arg= width,2nd arg= printing input
     printf("%*d\n", 2, 1);
     printf("%*d\n", 3, 1);

     //PRECISION
     printf("%3.1d\n", 1);       // first num is width, no of digits to be printed
     printf("%3.2d\n", 1);
     printf("%3.3d\n", 1);     
     printf("%0.3f\n", 1.0);    //no change in int part ,after decimal no of zeros
     printf("%0.10f\n", 1.0);
     printf("%12.8s\n", "Hello World"); //width=12 ,8=no of char printed
 
     //FLAGS
     printf("%#x %#X %#x\n", 0xA, 0xA, 10);
     printf("%#o\n", 8);
     printf("%-3d %-3d\n", 1, 1);
     printf("%-3d %-3d\n", 10, 10);   //left alignment
     printf("%-3d %-3d\n", 100, 100);
     printf("% 3d\n", 100);
     printf("% 3d\n", -100);

     //ESCAPE SEQUENCES
     printf("Hello World\n");          //new line
     printf("Hello\rWorld\n");       //carriage return -overwrites
     printf("Hello\tWorld\n");       //tab space
     printf("Hello\bWorld\n");       //backspace
     printf("Hello\vWorld\n");       //vertical tab
     printf("Hello World\f\n");      //form feed
     printf("Hello\eWorld\n");     //escape
     printf("A\\B\\C\n");          // print backslash
     printf("\"Hello World\"\n");    //printing with quotes
     

     printf("%d%c",80,'%');        //printing 80%
     return 0;
}

