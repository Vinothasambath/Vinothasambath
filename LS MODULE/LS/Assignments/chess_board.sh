<<Documentation
NAME:Vinotha sambath
DATE:21.11.2022
DESCRIPTION:script to print the chess board
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash                             #shebang line /the path of the bash shell

for row in `seq 1 1 8`                  #for loop for the 8 rows of the chessboard
do
    for col in `seq 1 1 8`              #nested for loop for the columns of the chessboard
    do 
        res=$(($row+$col))              #saving the row and column value  of particular loop in a temporary variable result

        if [ $(($res%2)) -eq 0 ]        #checking  if modulus of result is equal to zero or not 
        then 
            echo -e -n "\e[47m" " "     #condition true ie)=0 ,so print white color
       else
           echo -e -n "\e[40m" " "      #condition false ie)!=0,so print black color
       fi
   done
   echo -e -n "\e[0m" " "               #to bring back the colour to normal after every for row loop
   echo                                 #to go to next line as one for row loop is completed 
done

