<<Documentation
NAME:Vinotha sambath
DATE:29.11.2022
DESCRIPTION:Write a script to delete empty lines from a file
SAMPLE INPUT:./delete_empty_lines.sh file.txt (cla)
SAMPLE OUTPUT:Empty lines are deleted
Hello
How
are
you?
Documentation

#!/bin/bash

if [ $# -gt 0 ]                    #checks if cla is passed
then
    if [ -f $1 ]                   #checks if $1 is a file
    then
        if [ -s $1 ]               #checks if $1 has content or not
        then

             sed -i '/^[[:space:]]*$/d' $1        #sed -i used to make the changes permanent in the original file 
                                                  #space* means all empty lines with tab space newline
    echo "Empty lines are deleted"
    cat $1                         #concatenates  the file to o/p screen
        fi
    fi

else
    echo "Error: Please pass the file name through command line."  #error if no file is passed as arg
fi
