#include "InvertedIndex.h"

/*function to display the database */
int display_DB(wlist_t **head)
{
    /*loop runs for 27 times ie) no of index present */
    for( int index=0; index<(SIZE+1) ; index++ )
    {
        /*if the index has address */
        if( head[index] != NULL )
        {
            /*take temp pointer and traverse for printing  */
            wlist_t *temp = head[index];
            while(temp != NULL)
            {
                printf("\e[93m[%d]\t\e[32m[%-10s]\e[39m\t%-2dfile(s) : File_name : ",index,temp -> word ,temp -> f_count );
                
                /*taking another t_temp pointer to traverse the t-link of temp */
                file_table_t *t_temp = temp -> t_link;
                while(t_temp != NULL )
                {
                   printf("\e[32m%-10s\e[39m\t%-2dtime(s) ->\t",t_temp -> f_name, t_temp -> w_count);
                  t_temp = t_temp ->link;
                }
                printf("NULL\n");
                
             temp = temp -> link;
            }
        }
    }
    return SUCCESS;
}


