/*Documentation
NAME:Vinotha sambath
DATE:12.01.2023
DESCRIPTION:remove duplicate elements in a given array
SAMPLE INPUT:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5
SAMPLE OUTPUT:
After removing duplicates: 5 1 3
 */
#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size);

int main()
{
     int size, new_size=0;
     printf("Enter the size: ");                           //reading size
     scanf("%d", &size);
     
     int arr1[size];                                       //declaring arr1 and arr2
     int arr2[new_size];
     
     printf("Enter elements into the array: ");            
     for(int i=0 ; i<size ; i++)
     {
         scanf("%d", &arr1[i]);                           //reading arr1 elements
     }
     
     fun( arr1, size, arr2 , &new_size );                 //function call
     
     printf("After removing duplicates:"); 
     for(int i=0 ; i<new_size ; i++)
     {
        printf("%d ",arr2[i]);                            //printing array elements after removing duplicates
     } 
       return 0; 
}

void fun( int arr1[], int size, int arr2[], int *new_size)     //func definition
{
   int count=1,flag;                                           //initialize count 
   
   arr2[0]=arr1[0];                                            //store first ele of arr1 into arr2

   for(int i=1; i<size; i++)                                   //loop for comparing elements in arr1
   {
      for( int j=0; j<i; j++ )
      {
         if(arr1[i] == arr1[j])                                //if the elements are same dont save
         {
             
          flag=0;
          break;
         }
         else
         {
           flag=i;
         }
      }
      
      if( flag == i )
      {  
          arr2[count]=arr1[i];                                  //if the elements are differnt then store into arr2 
          count+=1;
      }
   
   }
    *new_size=count;                                            //change the size of arr2 using pointer deferencing
}
