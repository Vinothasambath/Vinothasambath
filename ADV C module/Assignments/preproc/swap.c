/*Documentation
NAME:Vinotha sambath
DATE:19.2.2023
DESCRIPTION:to define a macro swap (t, x, y) that swaps 2 arguments of type t
SAMPLE INPUT:
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1
SAMPLE OUTPUT:
Enter the num1 : 10
Enter the num2 : 20
After Swapping :
num1 : 20
num2 : 10
 */
#include<stdio.h>

#define SWAP(t,x,y)         \
{                           \
    t temp = x;             \
    x=y;                    \
    y=temp;                 \
}
                                                              //generic macro defined to swap anydatatype
int main()
{
    int choice;
    int num1, num2;
    char ch1, ch2;
    short sh1,sh2;
    float fl1, fl2;
    double d1, d2;
    char str1[15], str2[15];
    char op='y';

    while( op == 'y')
    {
       printf("DATATYPES:\n1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\n");
       printf("Enter your choice: ");
       scanf("%d",&choice);

       switch(choice)
       {
        
           case 1:
            printf("Enter the num1 and num2: ");                                      //INTEGER
            scanf("%d %d",&num1,&num2);
            SWAP(int,num1,num2);
            printf("numbers after swapping:%d %d\n",num1,num2);
            break;
        
           case 2:
            printf("Enter char1 and char2: ");                                        //CHAR
            scanf(" %c %c",&ch1,&ch2);
            SWAP(char,ch1,ch2);
            printf("characters after swapping:%c %c\n",ch1,ch2);
            break;
        
           case 3:                                                                    //SHORT
            printf("Enter the short_num1 and short_num2: ");
            scanf("%hd %hd",&sh1,&sh2);
            SWAP(short,sh1,sh2);
            printf("numbers after swapping:%hd %hd\n",sh1,sh2);
            break;
        
           case 4:
            printf("Enter the float_num1 and float_num2: ");                          //FLOAT
            scanf("%f %f",&fl1,&fl2);
            SWAP(float,fl1,fl2);
            printf("numbers after swapping:%f %f\n",fl1,fl2);
            break;
        
           case 5:
            printf("Enter the double_num1 and double_ num2: ");                       //DOUBLE
            scanf("%lf %lf",&d1,&d2);
            SWAP(double,d1,d2);
            printf("numbers after swapping:%lf %lf\n",d1,d2);
            break;
        
           case 6:
            printf("Enter the string1 and string2: ");                                //STRING
            scanf("%s %s",str1,str2);
            char *ptr1=str1;
            char *ptr2=str2;
            SWAP(char *,ptr1,ptr2);
            printf("strings after swapping:%s %s\n",ptr1,ptr2);
            break;
        
           default:
            printf("choose a Valid option\n");
   
       }
       printf("Do you want to continue(y/n): ");
       getchar();
       scanf("%c",&op);
    }

    return 0;
}



