<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash 
echo "program to check if product of 2 numbers are odd or even "
read -p" enter  2 numbers " num1 num2             #reads the number from user
product=`expr $num1 \* $num2`
if [ $(( $product % 2 )) -eq 0 ]              #if condition is used to check if the number is odd or even
then
   echo " the given number  is even "   #prints even if condition is true
  else
     echo "the given number  is odd"    #prints odd if the confition is false    
fi 
