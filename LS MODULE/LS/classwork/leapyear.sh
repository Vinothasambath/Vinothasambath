<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

#!/bin/bash
read -p "enter the year" year
if [ $(($year%4)) -eq 0 -a $(($year%100)) -ne 0 -o $(($year%400)) -eq 0 ]
then 
    echo "the year is a leap year"
else
    echo "the year is not a leap year"
fi

