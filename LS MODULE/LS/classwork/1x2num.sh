<<Documentation
NAME:Vinotha sambath
DATE:
DESCRIPTION:
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation

echo "program to check if the first number is the multiple of second"
read -p "enter the 2 numbers: " num1 num2
if [ $(($num1 % $num2)) -eq 0 ]
then 
    echo "$num1 is the multiple of $num2"
else
    echo "$num1 is not the multiple of $num2"
fi
