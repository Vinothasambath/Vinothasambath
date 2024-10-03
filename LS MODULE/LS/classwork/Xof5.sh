<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash 
echo "program to check if the number is a multiple of 5  "
read -p" enter a number " num             #reads the number from user

if [ $(( $num % 5 )) -eq 0 ]              #if condition is used to check if the number is odd or even
then
   echo " the given number  is a multiple of 5 "   #prints even if condition is true
  else
     echo "the given number  is not a multiple of 5 "    #prints odd if the confition is false    
fi 
