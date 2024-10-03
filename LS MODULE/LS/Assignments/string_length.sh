<<Documentation
NAME:Vinotha sambath
DATE:22.11.2022
DESCRIPTION:script to print the length of each and every string using arrays
SAMPLE INPUT:  ./string_length.sh hello hai how are you?
SAMPLE OUTPUT:  Length of string (hello) - 5
                Length of string (hai) - 3
                Length of string (how) - 3
                Length of string (are) - 3
                Length of string (you?) - 4

Documentation

#!/bin/bash                                                        #she-bang line

if [ $# -gt 0 ]                                                    #if condition to check cla are passed
then                
     arr=($@)                                                      #creating array by passing all cla using $@
     len=${#arr[@]}                                                #len variable to collect length of the array

for var in `seq 0 1 $(($len-1))`                                   #loop with seq 0 to length-1=gives index values
    do
        echo "Length of string (${arr[$var]}) - ${#arr[$var]}"     #displays the array elements and their respective length as loop runs
    done 

else
    echo "Error : Please pass the arguments through command-line." #error if no arg are passed through cla
fi
