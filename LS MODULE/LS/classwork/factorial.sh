<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash
read -p "enter a number:" num
count=0
prod=1

while [ $count -lt $num ]
do
    count=$(($count+1))
    prod=$(($prod*$count))

#echo"the factorial of $count is $prod"
 
done

echo "the factorial of $num is $prod"
