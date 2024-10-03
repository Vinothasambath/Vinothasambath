/*Documentation
NAME:Vinotha sambath
DATE:12.1.2022
DESCRIPTION:finding 2nd largest element in an array
SAMPLE INPUT:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
SAMPLE OUTPUT:
Second largest element of the array is 5
 */
#include <stdio.h>

int sec_largest(int [], int);

int main()
{
    int size, ret;
    
                                                            //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements into the array: ");
    for( int i=0; i<size; i++ )                            //Reading array elements
    {
        scanf("%d" ,&arr[i]);
    }
                                                            //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}

int sec_largest( int ptr[] ,int size )                     //function definition
{
    int large,sec_large;
    
        large = ptr[0];

    for( int i=1 ; i<size ; i++ )                            //comparing with array elements
    {   
      
        if( ptr[i] > large  )
        {
            large=ptr[i];                                  //updating large
        }
    }
     

    if (  ptr[0] == ptr[1] )                                    //declaring second largest
    {
       sec_large=ptr[2];
    }
    else if ( ptr[0]== large )
    {
        sec_large=ptr[1];
    }
    else
    {
        sec_large=ptr[0];
    }

      for( int i=1 ; i<size ; i++ )
      { 
        if ( (sec_large < ptr[i] ) && (ptr[i] < large))      //updating sec_large
                                          
        {
            sec_large=ptr[i];
        }
       
      }

     return sec_large;
}
