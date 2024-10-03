/*Documentation
NAME:Vinotha sambath
DATE:22.04.2023
DESCRIPTION:Inverted search using Inverted Indexing : data structure that stores mapping from words to documents or set of documents i.e.
directs you from word to document.In this project  based on the first character of the word ,indexing is done using hash table.
 */

#include "InvertedIndex.h"

int main(int argc, char*argv[])
{
    /*if no command line arg are passed */
    if(argc == 1)
    {
        printf("\e[31mError\e[39m:Invalid number of arguments.\nUsage:\e[36m ./inverted_index <file1.txt> <file2.txt> ...\e[39m");
        return FAILURE;
    }
    
    file_node_t *fhead = NULL;
    validate_n_store_filenames(&fhead, argv+1);

    //if no arguments are valid
    if( fhead == NULL )
    {
        printf("\e[36mAll are INVALID Files.\e[39m\nplease pass the valid files.\n");
        return 0;
    }

    /*initializing hash table which is array of structure pointers */
    wlist_t *HT_head[SIZE+1] = {NULL}; //0 to 25 for alphabets(both upper &lower) 26th index is for spl char

    int option, count=0;
    char choice ;
    char file_name[NAMELENGTH];
    char word[SIZE];

    do
    {
         printf("\e[96m\n******MENU******\n1.Create Database\n2.Display Database\n3.Search Database\n4.Update Database\n5.Save Database\e[39m\n\nEnter your choice : ");
         scanf("%d",&option);

         switch(option)
         {
              case 1:
                   if( count == 0 )
                   {
                     /*calling create_DB function only while passing arg through cl */
                     create_DB(fhead, HT_head);
                     count++;
                   }
                   else
                   {
                       printf("\e[93mFiles passed through commandline already added into the Database\e[39m\n");
                   }                                  
                 break;

              case 2:
                   /*calling display_DB function */
                   display_DB( HT_head );
                 break;

              case 3:
                   printf("Enter the word to be searched in Database :");
                   scanf("%s",word);
                   /*calling search_DB function */
                   search_DB( HT_head, word); 
                 break;

              case 4:
                   /*reading filename from user to update db */
                   printf("Enter the filename :");
                   scanf("%s",file_name);

                   /*calling update_DB function */
                   update_DB(&fhead, HT_head, file_name);
                 break;

              case 5:
                   printf("Enter the backup filename :");
                   scanf("%s",file_name);
                   /*calling save_DB function*/
                   save_DB(HT_head, file_name);
                 break;

              default:
                 printf("Error:Enter a valid option\n");
         }
         printf("\n\e[93mDo you want to continue(y/Y) ?\e[39m");
         getchar();
         scanf("%c",&choice);
    }while(choice == 'y' || choice == 'Y');

    return 0;
}
