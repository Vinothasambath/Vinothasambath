//Implementation of printf using variadic function


#include<stdio.h>
#include<stdarg.h>
int my_printf(char *format,...)
{
    va_list(ap);
    va_start(ap,format);

    while(*format)
    {
        if( *format == '%' )
        {
            format++;
            switch(*format)
            {
                case 'd':
                    printf("%d",va_arg(ap,int));
                    break;
                case 'c':
                    printf("%c",va_arg(ap,int));
                    break;
                case 'f':
                    printf("%f",va_arg(ap,double));
                    break;
                case 's':
                    printf("%s",va_arg(ap,char*));
                    break;
                default:
                    putchar(*format);
                    break;
            }
        }
        else
        {
            putchar(*format);
        }

        format++;
    }
    va_end(ap);
}
int main()
{
    my_printf("The numbers are :%d %d\n",10,20);
    my_printf("the float value is: %f\n",29.6);
    my_printf("the string is %s\n","HELLO WORLD");
    my_printf("the character is %c\n",'A');
    return 0;
}

