#include "InvertedIndex.h"

/*function to save database ie)taking backup */
int save_DB(wlist_t **head, char *fname)
{
    /*opening an file pointer in write mode */
    FILE *fp = fopen(fname, "w");

    /*loop runs for 27times */
    for( int i=0; i<SIZE+1 ;i++)
    {
        /*taking the index of headpointers with addresses */
        if(head[i] != NULL)
        {
            /*temp pointer and traverse */
            wlist_t *temp = head[i];
            while( temp != NULL )
            {
                /*using fprint writing into the file using file pointer fp */
                fprintf(fp ,"#%d\n", i);
                fprintf(fp ,"%s;%d;",temp -> word,temp ->f_count);

                file_table_t *t_temp = temp -> t_link;
                while( t_temp != NULL )
                {
                    fprintf(fp,"%s;%d;",t_temp ->f_name,t_temp ->w_count); 
                    t_temp = t_temp -> link;
                }
                    fprintf(fp,"#\n");
               temp = temp -> link;
            }     
        }
    }
    /*closing file pointer */
    fclose(fp);
    printf("\e[92mSuccessfull\e[39m: Database saved in \e[95m%s\e[39m file\n",fname);
}
