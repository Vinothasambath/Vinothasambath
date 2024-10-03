<<Documentation
NAME:Vinotha sambath
DATE:18.11.2022
DESCRIPTION:to find the largest and smallest of the given n numbers
SAMPLE INPUT:5 4 3 2 1
SAMPLE OUTPUT:largest no is 5 and smallest numbers is 1
Documentation

#!/bin/bash
read -p "enter total number" num

for i in `seq $num`
do
    read -p "enter the number" n
  
    if [ $i -eq 1 ]
        then 
            small=$n
            large=$n
        fi

    if [ $n  -lt  $small ]
    then
        small=$n
    fi

   if [ $n -gt $large ]
   then 
       large=$n
   fi
done

echo "the smallest number is $small and the largest number is $large "


