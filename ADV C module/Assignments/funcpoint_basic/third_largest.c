/*Documentation
NAME:Vinotha sambath
DATE:14.1.2022
DESCRIPTION:finding 3rd largest element in an array
SAMPLE INPUT:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
SAMPLE OUTPUT:
third largest element of the array is 4
 */
#include <stdio.h>

int third_largest(int [], int);

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
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}

int third_largest( int ptr[] ,int size )                   //function definition
{
    int i, large, sec_large, third_large;
    
    //LARGEST ARRAY ELEMENT 
        large = ptr[0];

    for( i=1 ; i<size ; i++ )                            //comparing with array elements
    {   
      
        if( ptr[i] > large  )
        {
            large=ptr[i];                                  //updating large
        }
    }
     //SECOND LARGEST ARRAY ELEMENT

    if ( large == ptr[0] && ptr[0] == ptr[1])                                    //declaring second largest
    {
       sec_large=ptr[2];
    }
    else if ( large == ptr[0] )
    {
        sec_large=ptr[1];
    }
    else 
    {
        sec_large=ptr[0];
    }

      for( i=1 ; i<size ; i++ )
      { 
        if ( (ptr[i] > sec_large) && (ptr[i] < large))      //updating sec_large
                                          
        {
            sec_large=ptr[i];
        }
       
      }

     //THIRD LARGEST ARRAY ELEMENT
      if( (large == ptr[0] && sec_large == ptr[1]) ||( large == ptr[1] && sec_large == ptr[0]) )
      {
          third_large=ptr[2];
      }
      else if( large == ptr[0]  && ptr[0] ==ptr[1] && ptr[2] == sec_large )
      {
          third_large=ptr[3];
      }
      else if( large == ptr[0] || sec_large == ptr[0]) 
      {
          third_large=ptr[1];
      }
      else
      {
          third_large=ptr[0];
      }
     
      for ( i=1 ; i<size ; i++ )
     {    
         if ( ptr[i]>third_large && ptr[i] < sec_large && ptr[i] < large )
         {
             third_large=ptr[i];                              //updating third large
         }
     }
      return third_large;

} 
