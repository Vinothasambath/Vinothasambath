#include<stdio.h>


int main()
{
    char *s[3]={"Array",    //---> 3 rows of base addresses,both  statically
                "of",
                "st"};     


   /* printf("%s %s %s\n",s[0],s[1],s[2]);
    
    for(int i=0;i<3;i++)        
    {
        for(int j=0;s[i][j] !='\0';j++)
        {
             printf("%c ",s[i][j]);  //prints each character
       
        }
        printf("\n");
    }

    */

  char *temp=s[0];        //swapping base addresses 
  s[0]=s[2];
  s[2]=temp;

  printf("%s %s %s\n",s[0],s[1],s[2]);
  
  printf("%p %p %p\n",s[0],s[1],s[2]);
  
  printf("%zu\n",sizeof(s));  //total array 3(rows)*8=24
  
  printf("%zu\n",sizeof(*s)); //pointers size
  printf("%ld\n",sizeof(s[0]));  
  printf("%ld\n",sizeof(s[1])); 
  printf("%ld\n",sizeof(s[2])); 
}
                                           
