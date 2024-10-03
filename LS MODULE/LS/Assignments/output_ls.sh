<<Documentation
NAME:Vinotha sambath
DATE:23.11.2022
DESCRIPTION: script to print contents of a directory without ls command
SAMPLE INPUT:./ouput_ls.sh ~ ~/ECEP(command line arg)
SAMPLE OUTPUT:/home/user:
              Downloads Documents Desktop Music Pictures Public Videos
              ECEP
              /home/user/ECEP:
              Linux_Systems Advnc_C Linux_Internals Data_Structures MC
Documentation

#!/bin/bash

if [ $# -eq 0 ]          #if the command arg is empty 
then
    echo *               #print the list of contents in the present working directory
fi

for i in $@              #for loop executes i times(total arg count) , i value= takes each command line argument for each iteration 
do
    if [ -d $i ]         #checks if directory is present or not (-d is a  test operator)
    then
        cd $i            #changes the directory 
        echo "$i"        #prints present working directory 
        echo *           #prints all directories and files in current directory
    else
        echo "output_ls.sh: Cannot access ‘Test’ : No such a file or directory." #prints if no directory is present in that name 
    fi
done


