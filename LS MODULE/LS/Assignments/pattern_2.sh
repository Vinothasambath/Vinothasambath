<<Documentation
NAME:Vinotha sambath
DATE:21.11.2022
DESCRIPTION: to print the pattern using numbers
SAMPLE INPUT: 4
SAMPLE OUTPUT: 1
               2 3
               4 5 6
               7 8 9 10
Documentation

#!/bin/bash                           #she-bang line

read -p "enter the number " num       #reads the input from user

current=1                             #initialize a variable current =1

for row in `seq $num`                 #for loop for the rows,rows=seq of number values 
do 

    for col in `seq $row`             #for loop for the column values ,col=seq of row values taken
    do                                 
        echo -n "$current "           #printing the current value without new line
        current=$(($current+1))       #incrementing the current  by 1 & storing it in current as the values gets incremented every loop
    done
    
    echo                              #to go to new line
done
