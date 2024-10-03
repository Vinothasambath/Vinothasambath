#include "InvertedIndex.h"

/*validating the filenames and storing */
void validate_n_store_filenames(file_node_t **fhead, char *filenames[])
{
    int result, i=0;
    
    while(filenames[i] != NULL )
    {
        /*calling isfilevalid function &storing the return value in the variable result */
        result = IsFileValid(filenames[i]); 
        
        /*if file not present */
        if(result == NOT_PRESENT)
        {
             printf("\e[91mError\e[39m: File \e[35m%s\e[39m NOT EXIST.\nSo file not added to the list.\n",filenames[i]);
        }
        /*if file is present but empty */
        else if(result == FILE_EMPTY)
        {
            printf("\e[91mError\e[39m: File \e[35m%s\e[39m is EMPTY.\nSo file not added to the list.\n",filenames[i]);
        }
        /*if its a valid file */
        else
        {
            /*calling storefilenamesto list function to store file names in the filenode */
            int status = store_filenames_to_list(filenames[i], fhead);    
            
            /*if file is unique */
            if(status == SUCCESS)
               printf("\e[32mSuccessful\e[39m: File \e[35m%s\e[39m is VALID & ADDED to the list\n",filenames[i]);
            /*if filename is repeated donot add */
            else if( status == REPEATED)
                printf("\e[91mError\e[39m: File \e[35m%s\e[39m is REPEATED.\nFile not added to list\n",filenames[i]); 
            else
                printf("Memory not allocated for new node\n");
        }
        i++;
    }
}

/*checking the file is valid or not */
int IsFileValid(char *filename)
{
    FILE *fp = NULL ;
    //if file present ,open it
    if(fp = fopen(filename, "r"))
    {
        fseek (fp, 0, SEEK_END);
        //file present &  not empty
        if (ftell(fp) != 0) 
        {
            fclose(fp); // close the file
            return SUCCESS;
        }
        //file present & empty
        else
            return FILE_EMPTY;    
    }
    //file not present
    else
        return NOT_PRESENT;
}

/*storing filenames */
int store_filenames_to_list(char *f_name, file_node_t **head)
{
    /*if file list is empty */
    if(*head == NULL)
    {
        //node is created ,update head with new node address
        *head = create_fnode(f_name);
         if( *head != NULL )
            return SUCCESS;
         //if node not created
         else
            return FAILURE;
     }
     /*if file list is not empty */
     file_node_t *temp = *head;
     file_node_t *prev = NULL;

     while( temp != NULL )
     {
         //if file name not exist 
         if(strcmp(temp ->f_name, f_name))
         {
             prev = temp;
             temp = temp -> link;
         }
         //if file name is repeated
         else
             return REPEATED;
     }
     // if filename is not repeated ,insert to the file list
     prev -> link = create_fnode(f_name);
     if(prev -> link != NULL )
         return SUCCESS;
     else
         return FAILURE;
}

/*function to create file node */
file_node_t *create_fnode( char *fname )
{
    file_node_t *new = malloc(sizeof(file_node_t));
    
    /*if memory is not allocated*/
      if(new == NULL )
        return NULL;
    
    /*node is created,update filename and link */
    strcpy(new -> f_name ,fname);
    new -> link = NULL;
    return new;
}
