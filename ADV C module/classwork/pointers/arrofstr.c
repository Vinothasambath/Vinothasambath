//program to print menu and select options

#include<stdio.h>
void print_menu(char ** );

int main()
{
    char *str[5]={"File","Edit","View","Insert","Help"};

    print_menu( str );

    return 0;
}

void print_menu( char **menu)
{
    int i , option;
    int arr[5]={1,2,3,4,5};
    
    for(i=0; i<5 ;i++)
    {
        printf("%d.%s\n",i+1,menu[i]);
    }
    
    printf("Select your option:");
    scanf("%d",&option);
   
    for(i=1; i<=5 ; i++)
    {
        if ( option == arr[i-1] )
        {
            printf("you have selected %s Menu\n",menu[i-1]);
            break;
        }
    }
}

