<<Documentation
NAME:Vinotha sambath
DATE:18.11.2022
DESCRIPTION:to print pattern when an enter number is 5
SAMPLE INPUT:5
SAMPLE OUTPUT:* * * * *
#               * * * * 
#                 * * *
#                   * *
#                     *
Documentation


#!/bin/bash
read -p "enter the number " num 

for row in `seq  $num -1 1`            
do
    for space in `seq  $((5-$row))`
    do 
        echo -n "  "
    done

    for col in `seq  1 1 $row` 
    do
        echo -n "* "
    done

    echo
done
