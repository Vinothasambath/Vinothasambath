/*Documentation
NAME:Vinotha sambath
DATE:17.2.2023
DESCRIPTION:menu to manipulate or display the value of variable of type t
SAMPLE INPUT/OUTPUT:
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i,choice=1;
    void *ptr=malloc(8*sizeof(char));                                            //memory block of 8bytes is taken in a void pointer
    int char_flag1=0,char_flag2=0,int_flag=0,float_flag=0,dou_flag=0,short_flag=0;

    while( choice )
    {
    printf("\n<<<<MAIN MENU>>>> \n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n\nchoice--> ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:                                                                   //ADDING ELEMENTS
            
            printf("Enter the type of element  to insert:\n1. char\n2. short\n3. int\n4. float\n5. double\n\nchoice-->");
            scanf("%d",&choice);

            switch(choice)
            {
                case 1:                                                          //CHAR
                    if( char_flag1 == 0 || char_flag2 == 0 || dou_flag == 0  )     
                    {
                        if( char_flag1 == 0 && dou_flag == 0)
                        {

                           printf("Enter a char: ");
                           scanf(" %c",(char *)ptr);                            //1byte ,ptr=index 0
                           char_flag1=1;
                           printf("CHAR added\n");
                        }
                        else if(char_flag2 == 0 && dou_flag == 0)
                        {
                           printf("Enter a char: ");                  
                           scanf(" %c",(char *)ptr+1);                         // 1byte   ,ptr+1(sizeof(char))=index 1
                           char_flag2=1;
                           printf("CHAR added\n");
                        }
                        else
                        {
                        printf("ERROR:sorry the memory is filled\n");
                        }
                    }
                break;
                case 2:                                                       //SHORT                  
                    if( short_flag == 0 && dou_flag == 0 )
                    {
                    printf("Enter a short: ");
                    scanf("%hd",(short *)ptr+1);                              //2 bytes, ptr+1(sizeof(short))=index 2
                    short_flag=1;
                    printf("SHORT VALUE added\n");
                    }
                    else
                    {
                        printf("ERROR:sorry the memory is filled\n");
                    }
                break;
                case 3:                                                        //INT
                    if( int_flag == 0 && float_flag == 0 && dou_flag == 0 )
                    {
                    printf("Enter a int: ");
                    scanf("%d",(int *)ptr+1);                                  //4 bytes,ptr+1*(sizeof(int))=index 4
                    int_flag=1;
                    printf("INTEGER VALUE added\n");
                    }
                    else
                    {
                        printf("ERROR:sorry the memory is filled\n");
                    }
                break;
                case 4:                                                         //FLOAT
                    if( int_flag == 0 && float_flag == 0 && dou_flag == 0 )
                    {
                    printf("Enter a float: ");
                    scanf("%f",(float *)ptr+1);                                  //4 bytes , index 4
                    float_flag=1;
                    printf("FLOAT VALUE added\n");
                    }
                    else
                    {
                        printf("ERROR:sorry the memory is filled\n");
                    }
                break;
                case 5:                                                            //DOUBLE
                    if( dou_flag == 0 && char_flag1 == 0 && char_flag2 == 0 && short_flag == 0 && int_flag == 0 && float_flag == 0 )
                    {
                    printf("Enter a double: ");
                    scanf("%lf",(double *)ptr);                                   // 8 bytes .index 0
                    dou_flag=1;
                    printf("DOUBLE VALUE added\n");
                    }
                    else
                    {
                        printf("ERROR:sorry the memory is filled\n");
                    }
                break;
            }

        break;
        case 2:                                                                  //REMOVING 

            if( dou_flag == 1 || float_flag == 1 || int_flag == 1 || short_flag == 1 || char_flag2 == 1 ||char_flag1 == 1 )
            {
               if( char_flag1 == 1 )
               {
                  printf("INDEX 0 : %c(char)\n",*(char *)ptr);
               }
               if( char_flag2 == 1 )
               {
                  printf("INDEX 1 : %c(char)\n",*((char *)ptr+1));
               }
               if( short_flag == 1 )
               {
                  printf("INDEX 2 : %hd(short)\n",*((short *)ptr+1));
               }
               if( int_flag == 1 )
               {
                  printf("INDEX 4 : %d(int)\n",*((int *)ptr+1));
               }
               if( float_flag == 1 )
               {
                  printf("INDEX 4 : %f(float)\n",*((float *)ptr+1));
               }
               if( dou_flag == 1 )
               {
                  printf("INDEX 0 : %lf(double)\n",*((double *)ptr));
               }
            
            
               printf("Enter the index value to be deleted : ");                       //reading index value and making it as 0
               scanf("%d",&i);

                if( i == 0 )
                {
                    if( char_flag1 == 1 )
                    {
                        char_flag1=0;
                        printf(" INDEX 0 successfully deleted.\n");
                    }
                    else if( dou_flag == 1 )
                    {
                        dou_flag=0;
                        printf(" INDEX 0 successfully deleted.\n");
                    }  
                }
                else if( i == 1 )
                {
                    if( char_flag2 == 1 )
                    {
                        char_flag2=0;
                        printf(" INDEX 1 successfully deleted\n.");
                    }
               }  
               else if( i == 2 )
               {
                    if( short_flag == 1 )
                    {
                        short_flag=0;
                        printf(" INDEX 2 successfully deleted.\n");
                    }  
               }
               else if( i == 4 )
               {
                    if( int_flag == 1 )
                    {
                        int_flag=0;
                        printf(" INDEX 4 successfully deleted.\n");
                    }
                    if( float_flag == 1 )
                    {
                        float_flag=0;
                        printf(" INDEX 4 successfully deleted.\n");
                    }
               }
            }
            else
            {
                printf("NO ELEMENT TO REMOVE/DELETE\n");
            }  
        break;                                                                                //DISPLAYING
        case 3:
            if( dou_flag == 1 || float_flag == 1 || int_flag == 1 || short_flag == 1 || char_flag2 == 1 ||char_flag1 == 1 )
            {
                if( char_flag1 == 1 )
                {
                    printf(" CHARACTER at index 0 : %c\n",*(char *)ptr);
                }
                if( char_flag2 == 1 )
                {
                    printf("CHARACTER at index 1 : %c\n",*((char *)ptr+1));
                }
                if( short_flag == 1 )
                {
                    printf("SHORT at index 2 : %hd\n",*((short *)ptr+1));
                }  
                if( int_flag == 1 )
                {
                    printf("INTEGER at index 4 : %d\n",*((int *)ptr+1));
                }
                if( float_flag == 1 )
                {
                    printf("FLOAT at index 4 : %f\n",*((float *)ptr+1));
                } 
                if( dou_flag == 1 )
                {
                    printf("DOUBLE at index 0 : %lf\n",*((double *)ptr));
                }
            }
            else
            {
                printf("NO ELEMENT TO DISPLAY\n");
            }
        break;
        case 4:                                                                                  //EXIT
            exit(0);
        break;
    }

    }
    free(ptr);
return 0;
}
            
