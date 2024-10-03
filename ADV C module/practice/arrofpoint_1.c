#include <stdio.h>
void print_array( int ** );


int main()
{
        int a[2] = {10, 20};
        int b[2] = {30, 40};
        int c[2] = {50, 60};

        int *ptr[3]={ a,b,c };         //here a b c are arrays an their base address is passed to array of pointers
       /* ptr[0] = a;
        ptr[1] = b;
        ptr[2] = c; */
        
        print_array( ptr );
        return 0;
}

void print_array(int **p)
{
        int i,j;
        for (i = 0; i < 3; i++)          //here 2 loops are needed, to access values its like 2d array rows and colums to be considered
        {
            for(j=0; j < 2 ;j++ )
            {
             printf("%d  ", p[i][j]);     //*(p[i]++)
            // printf("at %p  \n", );
            }
            printf("\n");
        }
}
