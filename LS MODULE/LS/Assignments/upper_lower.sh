<<Documentation
NAME:Vinotha sambath
DATE:24.11.2022
DESCRIPTION:Shell script to convert string lower to upper and upper to lower
SAMPLE INPUT:/upper_lower.sh file.txt(filename through command line)

SAMPLE OUTPUT:1 – Lower to upper
              2 – Upper to lower
              Please select option : 1
              WHAT IS OS?
              WHAT ARE THE DIFFERENT OS?
              WHEN IS OS USED?
              WHAT IS PARTITION AND ITS USE?
              HOW MANY PARTITIONS CAN BE DONE?
Documentation

#!/bin/bash

if [ $# -gt 0 ]                                  #cond to check file is given as argument through command line
then
    if [ -f $1 ]                                 #test file operator  to  check if  file exist  
    then 
       
        if [ -s $1 ]                             #test file operator -s to check the contents are there in the file
        then

          echo "1 – Lower to upper"              #giving users options through echo
          echo "2 – Upper to lower"
          read -p "Please select option :" opt   #reading the option from the user
         
          case $opt in                           #case where options are passed

             1)cat $1 | tr [:lower:] [:upper:]    #1 -concatenates the file and piped to tr command as input which converts contents of 
                                                  #file from lower to upper case 
                 ;;
             2)tr [:upper:] [:lower:] < $1        #2 here instead of cat ,file is given as input to tr command through indirection
                 ;;
             *)echo "Error:choose any one option from above 2" 
                 ;;
          esac
     
        else
            echo "Error: No contents inside the file."
        fi

     else 
         echo "No file exists :$1"
     fi
 else
     echo "Error : Please pass the file name through command line."
 fi
