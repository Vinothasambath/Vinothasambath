/*Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:program to print grade for given percent
SAMPLE INPUT:
SAMPLE OUTPUT:
 */
#include<stdio.h>

int main()
{
    int num ;
    printf("Enter the percentage of a student's marks: ");
    scanf("%d", &num );
    switch (num)
    { 
        case 1 ... 50 :
            printf("Grade = E\n");
            break;

        case 51 ... 60:
            printf("Grade = D\n" );
            break;

        case 61 ... 70:
            printf("Grade = C\n ");
            break;
       
        case 71 ... 80:
            printf("Grade = B\n ");
            break;
            
        case 81 ... 90:
            printf("Grade = A\n");
            break;
        
        case 91 ... 100:
           printf("Grade = O\n");
           break;
         default :
           printf("Enter percentage within 100\n");     
    }
    return 0;
}





