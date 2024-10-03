    //SCANF AND SELECTIVE SCANF

#include<stdio.h>
int main()
{     
     int h,m,s;
     char id[5];
     char name[10];

    //Format specifier
     printf("enter the hours,min,seconds: "); //+,- are taken as int sign ,so accepted by %d
    scanf("%d%*c%d%*c%d", &h, &m, &s);
                                       /* User Input → HH:MM:SS
                                          Scanned Input → HHMMSS
                                          User Input → 5+4+3
    *in scanf skips reading               Scanned Input → 543 
                                          */
    printf("%d %d %d\n",h,m,s);


    getchar();

   //selective scanf for string reading
    printf("Enter name and id ");
    scanf("%9[a-z A-Z]", name);  //best to give with size of strng
    
    while( getchar() != '\n');   //gets extra chars till \n doing nothing ;
   
   
    scanf("%4[0-9]", id);
                                 
                                      /* User Input → Emx123
                                         Scanned Input → Emx

                                         User Input → 123XYZ
                                         Scanned Input →123
                                         */
    printf("NAME:%s ID:%s\n",name,id);

    return 0;
}

