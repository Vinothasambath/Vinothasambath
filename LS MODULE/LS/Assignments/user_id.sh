<<Documentation
NAME:Vinotha sambath
DATE:28.11.2022
DESCRIPTION:Count the number of users with user IDs between given range.
SAMPLE INPUT: ./user_ids.sh 0 100
SAMPLE OUTPUT:Total count of user ID between 0 to 100 is : 3

Documentation

#!/bin/bash

if [ $# -eq 1 ]                                                                  #if 1 cla is passed
then
    echo "Error : Please pass 2 arguments through CL.
Usage :./user_ids.sh 100 200"
fi

function range ()              #function definition
{

    arr=(`cut -d ":" -f3 /etc/passwd`)                        #userids from /etc/password are stored in an array using cut command
    count=0                                                    #initialize count=0
         for i in ${arr[@]}                                   #taking all the array elements in i variable ,loop run for array ele times
         do
            if [ $i -ge $1 -a $i -le $2 ]                     #and operator used for range 
            then
                count=$(($count+1))                           #incrementing count if condition is true
            fi
         done
 }

if [ $# -eq 2 ]                                                                 #if 2 cla are passed
then
    if [ $1 -lt $2 ]                                                            #if $1  lesser than $2
    then
        range $1 $2                                                             #function call with $1 and $2 as arguments
        echo "Total count of user ID between $1 to $2 is : $count"          
 
        else
            echo "Error : Invalid range. Please enter the valid range through CL."     #if $1 greater or equal to $2

    fi
 fi

 if [ $# -eq 0 ]                                                                 #cla is not passed
 then
     range 500 1000                                                              #function called with 2 arguments for default
     echo "Total count of user ID between 500 to 10000 is: $count"
 fi


