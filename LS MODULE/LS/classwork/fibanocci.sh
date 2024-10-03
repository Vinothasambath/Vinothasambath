<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation
#!/bin/bash
read -p "enter the number of fibonnaci terms to display " num
first=0
second=1
next=0
#for var in `seq $num`
#do
    #echo -n "$next "
   # first=$second
  #  second=$next
 #   next=$(($first+$second))
#done

count=0
while [ $count -lt $num ]
do
    echo -n "$next "
    first=$second
    second=$next
    next=$(($first+$second))
    count=$(($count+1))
done
