#include <stdio.h>
int book_ticket()
{
    int ticket_sold = 0;   //each time stackframe is created value is 0
    ticket_sold++;         //ticket value will be 1
    return ticket_sold;    //tack frame is destroyed
}

int main()
{
   int count;
   count = book_ticket(); //1
   count = book_ticket(); //1
   printf("Sold %d\n", count);//1
   return 0;
}
