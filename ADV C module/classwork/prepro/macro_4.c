//get,set,clear nth bit in a integer using macro


#include<stdio.h>
#define SET_BIT(NUM, POS)       NUM | ( 1 << POS )
#define CLEAR_BIT(NUM, POS)     NUM & (~( 1 << POS ))
#define TOGGLE_BIT(NUM, POS)    NUM ^ ( 1 << POS )
#define GET_BIT(NUM, POS)       NUM & ( 1 << POS )

int main()
{
            int number, position,result;
            printf("Enter a int number ");
            scanf("%d",&number);
            printf("Enter the position ");
            scanf("%d",&position);
            printf("SET BIT %d\n",SET_BIT(number,position));
            printf("CLEAR BIT %d\n",CLEAR_BIT(number,position));
            printf("TOGGLE BIT %d\n",TOGGLE_BIT(number,position));
            printf("GET_BIT\n");
             result=GET_BIT(number,position);
             if( result ) 
                 printf("The bit is non zero:%d\n",result);
             else
                 printf("The bit is zero:%d\n",result);
             return 0;
}
             

