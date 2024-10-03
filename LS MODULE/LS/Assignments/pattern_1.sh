<<Documentation
NAME:Vinotha sambath
DATE:21.11.2022
DESCRIPTION:to print the pattern using numbers
SAMPLE INPUT:  4

SAMPLE OUTPUT: 1
               1 2
               1 2 3
               1 2 3 4
Documentation

#!/bin/bash                             #she-bang line

read -p "enter the number " num         #read the input from user

for row in `seq $num`                   #for loop for the rows ,seq of user input  used as row value 
do 
    for col in `seq $row`               #for loop for the columns ,here row values=column values
    do
        echo -n "$col "                 #column value will be printed as long as the loop executes
    done
    echo                                #echo used to go to next line
done

