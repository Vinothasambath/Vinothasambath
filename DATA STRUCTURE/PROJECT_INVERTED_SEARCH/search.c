#include "InvertedIndex.h"

/*function to search for a word in the database */
int search_DB(wlist_t **head, char *word)
{
    int flag = 0;
    for(int i=0; i<SIZE+1 ; i++)
    {
        /*searching all head pointer array with address */
        if(head[i] != NULL)
        {
            wlist_t *temp = head[i];
            while(temp != NULL)
            {
                //comparing the words in wlist and given word 
                if(strcmp(word, temp->word) == 0 )
                {
                    flag = 1;
                    printf("word \e[35m%s\e[39m FOUND in the database and present in \e[33m%d file(s)\e[39m\n", word,temp -> f_count);

                    file_table_t *t_temp = temp -> t_link;
                    while(t_temp != NULL)
                    {
                        printf("\e[92mIn file %s %d times(s)\e[39m\n",t_temp -> f_name, t_temp -> w_count);
                        t_temp = t_temp -> link;
                    }
                }
                temp = temp -> link;
            }
        }        
    }
    if( flag == 0 )
        printf("\e[31mError\e[39m: Word \e[35m%s\e[39m NOT FOUND in the database\n",word);
}

