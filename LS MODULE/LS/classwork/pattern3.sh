<<Documentation
NAME:Vinotha sambath
DATE:18.11.2022
DESCRIPTION:to print pattern when an enter number is 5
SAMPLE INPUT:5
SAMPLE OUTPUT:*       1
#                   1 0 
#                 1 0 1
#               1 0 1 0
#             1 0 1 0 1
Documentation


#!/bin/bash
read -p "enter the number " num 

for row in `seq $num `            
do
    for space in `seq  $(($num-$row))`
    do 
        echo -n "  "
    done


    for col in `seq $row`
    do
        if [ $(($col%2)) -eq 1 ]
        then
             echo -n "1 "
         else
             echo -n "0 "
         fi

    done
    echo
done
