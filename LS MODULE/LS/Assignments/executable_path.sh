<<Documentation
NAME:Vinotha sambath
DATE:30.11.2022
DESCRIPTION:For each directory in the $PATH, display the number of executable files in that directory
SAMPLE INPUT: 
SAMPLE OUTPUT:
Current dir: /usr/local/sbin
current count: 0
Current dir: /usr/local/bin
current count: 0
Current dir: /usr/sbin
current count: 205
Current dir: /usr/bin
current count: 1889
Current dir: /sbin
current count: 187
Current dir: /bin
current count: 159
Current dir: /usr/games
current count: 5
Current dir: /usr/local/games
current count: 0
Total – 2445
Documentation

#!/bin/bash

arr=(`echo $PATH | tr ":" " "`)              #$PATH is an environmentmental variable which has path of all executable commands file 
                                             #sending the $PATH to tr command and replacing the : with space and storing it an array
total=0 
for i in ${arr[*]}                           #taking  array elements in variable i for each iteration ,loop runs no of elements time
do
    if [ -d $i ]                                    #checks if the path is present
    then
           cd $i                                    #changing the directory to particular i value(ie path stored in array)
           echo -n "Current directory:" ;pwd        #printing the present working directory
      
          count=0                                 
          for j in `ls`                          #using ls as input to variable j which takes every file within pwd for every iteration
          do
             if [ -x $j ]                         #checks if the file is executable with test operator
             then 
              count=$(($count+1))                 #if the file is executable then increment the count
             fi
          done

    fi
      echo "Current count:" $count           #displays executable file  count in pwd 
 
      total=$(($total+$count))               #total executable files count in $PATH
done
      echo "TOTAL =$total"

