#include "InvertedIndex.h"

int update_DB(file_node_t **fhead, wlist_t **head, char *filename)
{
        /*calling isfilevalid function to validate the file */
        int result = IsFileValid(filename);  
    
        /* file not present */
        if(result == NOT_PRESENT)
        {
             printf("\e[91mError\e[39m: File \e[35m%s\e[39m does NOT EXIST.\nso file not updated to the database.\n",filename);
        }
        /*file is empty */
        else if(result == FILE_EMPTY)
        {
            printf("\e[91mError\e[39m: \e[35m%s\e[39m is EMPTY.\nSo file not added to the database.\n",filename);
        }
        /*file present */
        else
        {
            /*calling this function to store file name to the filenode list */
            int status = store_filenames_to_list(filename, fhead);    
            
            /*if file  not repeated ,read the file and store the words into the database */
            if(status == SUCCESS)
            {
                printf("\e[32mSuccessful\e[39m: \e[35m%s\e[39m is VALID & ADDED to the database\n",filename);
                read_datafile( head, filename);  
            }
            /*file name is repeated */
            else if( status == REPEATED)
                printf("\e[91mError\e[39m: \e[35m%s\e[39m is REPEATED.\n file not added to database.\n",filename); 
            else
                printf("Memory not allocated for new node\n");
        }
        return SUCCESS;
}
