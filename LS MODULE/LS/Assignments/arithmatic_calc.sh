<<Documentation
NAME:Vinotha sambath
DATE:22.11.2022
DESCRIPTION:a script for arithmetic calculator using command line arguments
SAMPLE INPUT:  ./arithmatic_calc.sh 25 + 41
SAMPLE OUTPUT: 25 + 41 = 66
Documentation

#!/bin/bash                           #she-bang line

      if [ $# -gt 0 ]                 #condition to check if arguments are passes through command line
      then
          if [ $# -ge 3 ]             #to check if  3 arguments are passed 
       then 

case $2 in                            #case to perform arithmatic operations and  $2 is the second cla passed to case as variable


    +) sum=`echo  $1+$3 | bc`         #add $1-1st and $3 -3rd cla done by piping the input to bc and stored in sum
       echo  "$1 + $3 = $sum"          #displays the output
      ;; 


    x)mul=`echo $1*$3 | bc`           #multiplication also done similar to addition .bc is used as it accepts both int and float values
        echo "$1 x $3 = $mul"
       ;;                             #break for mult

  
   /)div=`echo "scale=2;$1/$3" | bc`  #scale used in bc to get the exact results .here scale=2 displays 2 values after decimal point
       echo "$1 / $3 = $div"
       ;;

  
   -)sub=`echo $1-$3 | bc`            #subtraction
     echo "$1 - $3 = $sub"  
       ;;
      

   *) echo "Error : No match found.please input the valid arguments."  #default case- if invalid args are passed to case,gives error 
       ;;

       esac                            #closing case
       
   else
       
       echo "Error:Please pass 3 arguments.Usage:./arithmatic_calc.sh 2.3 + 6.7"  #displays error message if less than 3 arg passed
   
   fi                                 

   else

     echo "Error : Please pass the arguments through command line.Usage:./arithmatic_calc.sh 2.3 + 6.7" #displays error if no arg->passed
 
 fi
