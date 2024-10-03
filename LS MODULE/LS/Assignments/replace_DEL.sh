<<Documentation
NAME:Vinotha sambath
DATE:1.12.2022
DESCRIPTION:script to replace 20% lines in a C file randomly and replace it with the pattern
SAMPLE INPUT:
SAMPLE OUTPUT:
Before replacing
#incude <stdio.h>
int main()
{
         printf(“Hello world\n”);
}

After replacing
#incude <stdio.h>
int main()
{
<-----------Deleted------------>
}
Documentation
 
#!/bin/bash

if [ $# -gt 0 ]                                                         #checks if the cla is passed
then
    if [ -f $1 ]                                                        #test operator to check cla is a regular file
    then
        if [ -s $1 ]                                                    #test operator to check if the file has contents
        then 
            echo "BEFORE REPLACING" 
            cat $1                 
            total_lines=`wc -l $1 | cut -d " " -f1`                      #calculating the lines in the file using wc  and cut 
            
            if [ $total_lines -ge 5 ]                                    #checking if total lines in the file is greater than zero
            then
                replace_lines=$(($total_lines*20/100))                   #calculating the 20% of total lines
 
                 for var in `seq 1 $replace_lines`      
                 do 
                   
                   random_line=`shuf -i 1-$total_lines -n1`     #shuffle command to generate random numbers in the reange 1 to totallines 
                    
                   
                   sed -i $random_line's/.*/<----------------DELETED--------->/g' $1   #sed command used to replace the random line no
                                                                                       #with deleted pattern,i for making the changes  
               done                                                                    #permanent in the file
                     
                 echo "AFTER REPLACING "
                 cat $1 
                    
            else
                echo "The file has less than 5 number of line .please pass file with more lines"
            fi
        else
            echo "Error : $1 is empty file. So can’t replace the string."
        fi
    else
        echo "Error : No such a file."
    fi
else
         echo "Error : Please pass the file name through command line."
fi

