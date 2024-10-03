/*Documentation
NAME:Vinotha sambath
DATE:19.12.2022
DESCRIPTION:program to find to find which day of the year

SAMPLE INPUT:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday

SAMPLE OUTPUT:
Enter the option to set the first day : 2
The day is Tuesday

 */
#include<stdio.h>

int main()
{
    int num,first;                                
    printf("Enter the value of 'n' : ");           //reading how many days after which the day shoud be displayed           
    scanf("%d", &num );

    if ( num > 0 && num <=355 )                    //afterday num  should be >0 and <=355 
    {
        printf ("Choose First Day : \n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");

        printf("Enter the option to set the first day :");   //reading first day
        scanf("%d", &first);                              

          if ( first > 0 && first <= 7 )                     //if the option to select first day from list is >0 and <=7
          {

                   switch ( (num+first-1)%7 )                //if case label matches the switch expression ,respective cases will  exec
                   {   
                       
                   
                       case 1:
                            printf("The day is Sunday\n");       
                       break;
                          
                       case 2:
                            printf("The day is Monday\n");
                       break;

                       case 3:
                           printf("The day is Tuesday\n");
                       break;

                       case 4:
                           printf("The days is Wednesday\n");
                       break;

                       case 5:
                           printf("The day is Thursday\n");
                       break;
                   
                       case 6:
                           printf("The day is Friday\n");
                       break;

                       case 0:
                           printf("The day is Saturday\n");
                       break;
                   } 
          }  
          else 
          {
          printf("Error: Invalid input, first day should be > 0 and <= 7\n");
          } 
    } 
  else
  {
      printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
  }
    return 0;
}


