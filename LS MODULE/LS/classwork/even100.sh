<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation
#!/bin/bash
echo "printing  even numbers from 1 to 100"
i=1
while [ $i -le 100 ]
do
    if [ $(($i%2)) -eq 0 ]
    then 
        echo -ne "$i\t"
    fi
        i=$(($i+1))
    done
    echo
