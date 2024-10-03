<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash   
echo " enter the number "
read num              #reads the number from user

if [ $(( $num % 2 )) -eq 0 ]             #if condition is used to check if the number is odd or even
then
   echo " the given number $num is even "   #prints even if condition is true
  else
     echo "the given number $num is odd"    #prints odd if the confition is false    
fi 
