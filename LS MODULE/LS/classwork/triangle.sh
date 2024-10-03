<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash 
echo "program to check triangle is perfect right angled "
read -p" enter the 3 sides of the triangle " h a b    #reads the hypotunues,altitude,base  from user
hyp=$(($h*$h))
alt=$(($a*$a))
base=$(($b*$b))
if [ $hyp -eq $(($alt+$base)) ]              #if condition is used to check if the number is odd or even
then
   echo " it is a perfect right angled triangle"   #prints even if condition is true
  else
     echo "it is not a perfect right angled triangle"    #prints odd if the confition is false    
fi 
