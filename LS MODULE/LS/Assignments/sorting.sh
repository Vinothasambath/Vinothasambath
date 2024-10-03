<<Documentation
NAME:Vinotha sambath
DATE:28.11.2022
DESCRIPTION: script to sort a given number in ascending or descending order
SAMPLE INPUT:./sorting.sh -a 5 4 6 2 3 8 9 7 1
SAMPLE OUTPUT:Ascending order of array is 1 2 3 4 5 6 7 8 9
Documentation

#!/bin/bash

if [ $# -ge 3 ]            #checking if cla are passed
then
    arr=($@)               #storing all the cla in an array
    option=${arr[@]:0:1}   #storing the first index  element as option 
    arrlen=${#arr[@]}      #storing array len in arrlen

    case $option in                                 #case is executed when option is called or direcly we can put $1 in place of option
        
        -a)for i in `seq 1  $(($arrlen-1))`         # loop executes from 1 to len-1 times with elements stored in i for every iteration
              do
                  for j in `seq 1  $(($arrlen-$i-1))`  #loop executes 1 to arrlen-i-1 times with elements taken in j
                  do
                      if [ ${arr[$j]} -gt $((${arr[$j+1]})) ]   #checks if first index element greater than next (adj) index elements 
                      then
                          temp=${arr[$j]}                       #temp=value of first index
                          arr[$j]=$((arr[$j+1]))                #first index =value of next index
                          arr[$(($j+1))]=$temp                  #next index=value of temp
                         
                      fi

                  done                                            #loop continues till the final index 
           done
           
           echo "Ascending order of array is ${arr[@]:1:$(($arrlen-1))}"   #printing array values except 0th index
            ;;
  
        -d)for i in `seq 1  $(($arrlen-1))`
              do
                  for j in `seq 1  $(($arrlen-$i-1))`
                  do
                      if [ ${arr[$j]} -lt $((${arr[$j+1]})) ]       #similar to ascending order except checking if less than
                      then
                          temp=${arr[$j]}
                          arr[$j]=$((arr[$j+1]))
                          arr[$(($j+1))]=$temp
                         
                      fi

                  done
           done
           echo "Descending order of array is ${arr[@]:1:$(($arrlen-1))}"
            ;;
        *)echo "Error : Please pass the choice.
Usage : ./sorting -a/-d 4 23 5 6 3"
;;
    esac
else
    echo "Error : Please pass the argument through command line.
Usage : ./sorting -a/-d 4 23 5 6 3"
fi
