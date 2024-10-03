<<Documentation
NAME:Vinotha sambath
DATE:23.11.2022
DESCRIPTION:script to print contents of file from given line number to next given number of lines.
SAMPLE INPUT:./print_lines.sh 5 3 myfile.txt
SAMPLE OUTPUT:line number 5
              line number 6
              line number 7
Documentation

#!/bin/bash
if [ $# -eq 3 ]                         #condition to check if 3 arg are passed
then
    total_lines=`wc -l < $3`            #indirect the file from 3rd arg to wc -l to get the number of lines in that particular file  
    sum=$(($1+$2))                      #adding line number($1) and no of lines to print($2) 
       in=$(($sum-1))                   

    if [ $in  -le $total_lines ]        #checking if required no of  lines are present to print
    then

     head -$in $3 | tail -$2            #head  command results are  piped to tail 
     
    else                                #error if req no of lines are not present
         echo "Error: data.txt is having only 10 lines. file should have atleast 14 lines"
     fi

 else                                   #error  as the arg !=3
     echo "Error: arguments missing!
 Usage: ./file_filter.sh start_line upto_line filename
 For eg. ./file_filter.sh 5 5 <file>"
    fi




