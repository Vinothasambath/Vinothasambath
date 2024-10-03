/*Documentation
NAME:Vinotha sambath
DATE:15.12.2022
DESCRIPTION:program to generate AP, GP, HP series
SAMPLE INPUT:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
SAMPLE OUTPUT:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>
int main()
{
      int A, R, N, AP, GP, i ;                   //declaring variables as integer
      float HP;                                  //declaring HP variable as float

      printf("Enter the First Number 'A': ");             
        scanf("%d", &A);                                        //reading A - first value
      printf("Enter the Common Difference / Ratio 'R': ");      
        scanf("%d", &R);                                        //reading  R commom differnce or ratio
      printf("Enter the number of terms 'N': ");                
        scanf("%d", &N);                                        //reading N number of terms to be printed

      if ( N > 0 )                                               //if N is greater than zero
      {   
          // ARITHMETIC PROG LOOP
          printf("AP = " );
          AP=A;                                                 //assigning first value to a variable AP
          for ( i=1 ; i <= N ; i++ )                            //loop runs 1 to <=N times or can use 0 to <N
          {   
            printf("%d ", AP );                                 //printing AP
            AP=AP+R;                                            //Saving AP+common differnce value(R) back to AP
          }
          // GEOMETRIC PROG LOOP  
          printf("\nGP = " );
          GP=A;
          for ( i=1 ; i <= N ; i++ )
          {   
            printf("%d ", GP );
            GP=GP*R;                                            //similar to Gp but here gp is * with ratio 
          }
          //HARMONIC PROG LOOP 
          printf("\nHP = " );
          int NEW=A;                                            //assigning first value to a variable NEW
          for ( i=1 ; i <= N ; i++ )
          {
              HP=(float)1/NEW ;        //type casting  int to float, saving it back to float variable thus preserving the exact results  
              printf("%f ", HP );
              NEW=NEW+R;               
          } 

        } 
        
    else
    {
        printf("Invalid input");
    }
    return 0;
}

