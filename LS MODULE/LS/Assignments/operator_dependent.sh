<<Documentation
NAME:Vinotha sambath
DATE:25.11.2022
DESCRIPTION:a script to perform arithmetic operation on digits of a given number
SAMPLE INPUT:./operator_dependent.sh 1234+
SAMPLE OUTPUT:Sum of digits = 10
Documentation

#!/bin/bash

if [ $# -gt 0 ]                  #checks cla is passed with arg length $#
  then
      num=$1                     #storing the cla in variable num
      oper=${num: -1}            #saving the last digit(operators)in variable oper.offset methd =${var:index position:no of elem needed}
      total=${num:0:1}           #first index value is stored in total (offset method used)

      case $oper in              #opertors are passed to case
              
         +) for i in `seq 1 $((${#num}-2))`    #loop to do addition of digits ,i runs 1 to lengthofnum-2 times  
              do
                  value=${num:$i:1}            #offsetmethod to take the value of digits ${num:1:1} gives second digit of number or
                                                 #or say first index value with one element is taken and stored in value 
                  total=$(($total+$value))       #total =0thindex val + 1stindex value  etc loop continues till #num-2 times
              done
                  echo "Sum of digits = $total"  #displays sum of all digits as loop terminates
                  ;; 

         -)for i in `seq 1 $((${#num}-2))`        
              do
                  value=${num:$i:1}
                  total=$(($total-$value))        #similar to addition subtraction done here
              done
                  echo "Subtraction of digits = $total"
                  ;;
              
         x) for i in `seq 1 $((${#num}-2))`
              do
                  value=${num:$i:1}
                  total=$(($total*$value))         #multiplication
              done
                  echo "Multiplication of digits = $total"
                  ;;

         /) for i in `seq 1 $((${#num}-2))`
              do
                  value=${num:$i:1}
                  total=`echo "scale=2;$total/$value" | bc`      #values are given to bc to get the decimal/float values,scale is set to 2
              done
                  echo "Division of digits = $total"
                  ;;
         *)echo "Error: Operator missing or invalid operator, please pass operator as last digit (+,-,x,/)"
                  ;;                                              #error if none of the above cases match
      esac

  else                                                             #error if arguments are not passed through cl
         
      echo "Error : Please pass the arguments through CL.        
Usage : ./operator_dependent.sh 2345+"
     
 fi
