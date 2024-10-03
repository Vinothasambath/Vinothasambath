<<Documentation
NAME:Vinotha sambath
DATE:2.12.2022
DESCRIPTION:Using a recursive function to print each argument passed to the function
SAMPLE INPUT:./recursion.sh How are you? I am fine
SAMPLE OUTPUT:
How
are
you?
I
am
fine
Documentation
#!/bin/bash

    function recursion()                 #function named recursion is defined 
    {
           arr=($@)                      #storing the arguments passed through funtion call in an array
          
        if [ ${#arr[@]} -gt 0 ]          #if length of an array > 0 ,condition to terminate the recursive function
             then                         
                 echo "${arr[0]}"        #display first element of an array
          
           last=$((${#arr[@]}-1))        
           
           arr=(${arr[@]:1:$last})       #offset method to delete the first element(0 index) and storing backthe remaining to same array 
           
           recursion ${arr[@]}           # function is called within a function , 
                                         #array (index changes /element deleted) is passed as argument  
       fi
   }
   
 if [ $# -gt 0 ]                        #to check if cla are passed
 then 
     recursion $@                       #calling the function with cla

 else
    echo "Error : Pass the arguments through command line."
 fi

