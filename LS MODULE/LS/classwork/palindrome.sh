<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash
read -p "enter the number " num
temp=$num

rev=0
remain=0
while [ $num -gt 0 ]
do
    remain=$(($num%10))
    rev=$(($(( $rev*10)) + $remain))
    num=$(($num/10))
done
if [ $rev -eq $temp ]
then
    echo " the given number is a palindrone "
else
    echo " the given number is not a palindrome"
fi

