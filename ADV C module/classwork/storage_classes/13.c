//STATIC EXAMPLE

#include <stdio.h>
int book_ticket()
{
    static int ticket_sold = 0; //stored in .bss/uninitialised part of DATA SEGMENT ----if we give without 0 also it is taken as 0
    ticket_sold++;
    return ticket_sold;
}
int main()
{
    int count;
    count = book_ticket();  //each time the function is called static variable is increment ,the operations will get reflected as they are in DS instead of STACk
    count = book_ticket();     
    printf(“Sold %d\n”, count);  //so 2
    return 0;
}
