#include "InvertedIndex.h"

/*function to create database */
int create_DB(file_node_t *file_head, wlist_t **head)
{
    /*taking files from filenode */
    while(file_head)
    {
        read_datafile(head, file_head -> f_name);
        file_head = file_head -> link;
    }
    return SUCCESS;
}

/*function to read words from the files */
void read_datafile(wlist_t **head, char *f_name)
{
    /*open file */
    FILE *fp = fopen(f_name ,"r");

    int index, flag=1;
    /*word array to store word */
    char word[BUFF_SIZE];
    
    /*read each word in the file using fp till EOF and store in array word*/
    while(fscanf(fp, "%s",word) != EOF)
    {
        flag=1;
        /*check if first char is upper,then find index */
        if(isupper(word[0])) 
           index = word[0] - 65;

        /*check first char is lower,then find index */
        else if(islower(word[0]))
           index = word[0] - 97;

        /*if the char is spl character save it to last index */
        else
           index = 26;
           
        /*check if particular Hash table index is NULL or not */
        if(head[index] != NULL)
        {
            /*create temp pointer to traverse */
            wlist_t *temp = head[index];
            
            while(temp)
            {
                /*compare the word in the head[index] nodes  and word we read in file are equal or not */
                if(strcmp(temp -> word, word))
                {
                    //not equal traverse to next node
                    temp = temp -> link;
                }
                else
                {
                    //if equal,call update_word_count function
                    flag=0;
                    update_word_count(&temp, f_name);
                    break;
                }
            }
        }
        /*if the word is not present or if the head[index]==NULL ,call insert_at_last function */
        if(flag)
            insert_at_last_main(&head[index], word, f_name);
    }
    printf("\e[92mSuccessful\e[39m: creation of database for \e[35m%s\e[39m\n",f_name);

}

/*if the word we read is present in the wlist */
int update_word_count(wlist_t **head, char *fname)
{
    /*traverse through the t_link using temp pointer*/
	file_table_t *temp = (*head) -> t_link;
    file_table_t *prev = NULL;

	while (temp)
	{
        /*compare the filenames */
		if (strcmp(temp -> f_name, fname))
        {
            prev = temp;
			temp = temp -> link;
        }
		else
		{
            /*if the word occurance happened in the same file ,incement w_count */
			(temp -> w_count)++;
			return SUCCESS;
		}
	}
    /*if word is present in the wlist ,but in different file */
     //increment f_count
     ((*head) -> f_count)++;

     // create a new file table node and add it to the end of the list
    file_table_t *new_file_node = malloc(sizeof(file_node_t));
    if (new_file_node == NULL)
    {
        printf("Error:Memory not allocated\n");
        return FAILURE;
    }
    
    // Initialize the fields of the new file table node
    new_file_node -> w_count = 1;
    strcpy(new_file_node -> f_name, fname);
    new_file_node -> link = NULL;
    
    // Insert this new node as last node of your file table list.
    prev -> link = new_file_node;
	return SUCCESS;
}

/* Insert a new node with a word at the end of a linked list */
int insert_at_last_main(wlist_t **head, char *word, char *f_name)
{
    // Create a new node for the word
    wlist_t *new_node = malloc(sizeof(wlist_t));
    if (new_node == NULL)
    {
        printf("Error: memory allocation failed\n");
        return FAILURE;
    }

    // Initialize the new node
    strcpy(new_node->word, word);
    new_node->f_count = 1;
    new_node->t_link = NULL;
    new_node->link = NULL;

    // Update the link table for the new node
    update_link_table(&new_node, f_name);

    // If the list is empty, make the new node the head of the list
    if (*head == NULL)
    {
        *head = new_node;
        return SUCCESS;
    }

    // Traverse the list to find the last node
    wlist_t *temp = *head;
    while (temp->link != NULL)
        temp = temp->link;

    // Add the new node to the end of the list
    temp->link = new_node;

    return SUCCESS;
}

/* Add a new file and its word count to the link table of a word */
int update_link_table(wlist_t **word_node, char *f_name)
{
	// Create the link table node
	file_table_t *new = malloc(sizeof(file_table_t));
	// Check node created or not
    if (new  == NULL)
    {
        printf("Error: memory allocation failed\n");
        return FAILURE;
    }

	//Update the field of new node
	new -> w_count = 1;
	strcpy(new -> f_name , f_name);
	new -> link = NULL;

	(*word_node) -> t_link = new;

	return SUCCESS;
}


