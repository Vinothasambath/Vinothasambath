<<Documentation
NAME:Vinotha sambath
DATE:12.12.2022
DESCRIPTION:command line test
SAMPLE INPUT:
SAMPLE OUTPUT:
Documentation



choose="y"                                                          #initialize var choose with y                            
while [ $choose = "y" ]                                             #enters loop when cond is true
do

echo -e "\e[95m^^^^^^^^^COMMAND LINE TEST^^^^^^^^^^^
Please select from below options
1.sign up
2.Login
3.Exit\e[39m"
 read -p "Enter your option : " ops                                  #reading i/p from user
                                                                     #SIGN UP
case $ops in
    1) echo "-------------------------------------"                  #USERNAME SECTION
            count=1                                                               
            while [ $count -eq 1 ]                                   #loop
            do       
               count=0                   
               read -p "     choose your username: " username        #reading username
               u_arr=(`cat username.csv`)                            #taking list of username into array from username.csv file

               for i in  ${u_arr[@]}                                 #taking array elements in loop with i variable
               do
                if [ $i = $username ]                                #if ivalue = userinput
                then
                    echo -e "\e[91mUsername already exist.kindly choose a different name\e[39m "
                    count=1
                fi
               done
            done
               if [ $count -eq 0 ]
               then
                   echo $username >> username.csv               #if username not exit then save it to the file using appending(redirection
               fi
     
            count1=1                                                       #PASSWORD SECTION
            while [ $count1 -eq 1 ]
            do    
               count=0    
               read -sp "     Enter your password : " password             #reading input for password in hidden mode
               echo
               read -sp "     confirm your password: " conf_passwd         #confirming
               echo
                     if [ $password = $conf_passwd ]                       #if both passwords are equal
                     then
                     echo $password >> password.csv                        # save it to password.csv file
                     count1=0

                     echo "-----------------------------------------------------"
                     echo -e "\e[92m YOU HAVE SUCCESSFULLY SIGNED IN :-)\e[39m"
               
                     else
                     echo -e "\e[91mpassword and the confirmation password are not matching.kindly enter the correct one\e[39m "
                     count1=1
                     fi
            done
             ;;

    2) echo "------------------------------"                                #LOGIN
               
           count2=1
           while [ $count2 -eq 1 ]                            
           do
                U_arr=(`cat username.csv`)                                  #saving username.csv file contents in an array
                P_arr=(`cat password.csv`)                                  #saving password.csv file contents in another array
                                
            read -p "     Enter the username: " name           
               for i in `seq 0 $((${#U_arr[@]}-1))`                         #loop runs from 0 to arraylength-1 times
               do  
                  if [ $name = ${U_arr[$i]} ]                               #if user entered i/p = any one of array elements
                  then
                     read -sp "     Enter the password: " pass              #reads password
                     echo
                        if [ $pass = ${P_arr[$i]} ]                         #checks if password is correct with respect password file
                        then
                           echo
                           echo -e "\e[92m<<<<<<<<<Login successful>>>>>>>\e[39m"  #prints if true
                           count2=0
                        else
                           count2=1
                        fi
                  fi
               done
           if [ $count2 -eq 1 ]                                               #if password or username not matching
           then
              echo -e "\e[91m<LOGIN FAILED>\e[39m 
              Incorrect username or password.Please renter"
           fi
       done
       
       
                                                                                                   #TEST MENU
       echo -e "                \e[95m--------------------------------------
                 MENU                                                          
                 1)Take a test
                 2)Exit
               -------------------------------------------\e[39m"                                 #reads choice from user
       read -p "Enter your choice " ch                                       
       case $ch in 
           
           1)echo
             echo -e "             \e[93m <<<<<<<<WELCOME $name >>>>>>>>>>>>>>\e[39m"
             echo -e "\e[96m 
             READ THE INSTRUCTIONS CAREFULLY
             __________________________________________________________________________________________             
             1. For each questions timer is set for 10seconds
             2. No negative marks 
             3. Total 5 questions. Each questions carries 5 mark,thus for the total of 25marks.
             4. Do not exit the terminal in between. 
             5.Time out questions doesnot carries mark\e[39m "

                         for t in `seq 5 -1 1`                                            
                         do
                         echo  -ne "\rTEST STARTS IN : $t "
                         read -t 1 zzz
                         done


             total_lines=`wc -l questionbank.txt | cut -d " " -f1`                #reading total lines from questions file
              
             for i in `seq 5 5 $total_lines`                                      #loop starts from 5 increm 5 til totallines
             do  
                  
                   head -$i questionbank.txt | tail -5                            #using head and tail commands to print questions
                   
                   for j in `seq 10 -1 1`                                         #loop for timer set=10sec decrement by 1
                   do
                       echo -ne "\rEnter the option: $j "                         #read opt from user
                       read -t 1 option
                       
                       if [ -n "$option" ]                                        #if option is non empty string
                       then
                           echo $option >> useranswer.txt                         #save it to anotherfile useranswer.txt
                           break
                   
                       else 
                           option="e"                                             #option = e,if  not entered within 10seconds         
                      fi
                   done
                      if [ $option = "e" ]                                    
                      then
                          echo "e" >> useranswer.txt                              #save it to useranswer.txt file if option is e
                      fi
             done
               echo   
               echo -e "\e[33manalizing.............\e[39m "

               sleep 5
                  
               echo -e "\e[41m<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<RESULT PAGE>>>>>>>>>>>>>>>>>>>>>>\e[49m"    #RESULT SECTION
               
               cans_arr=(`cat answer.txt`)                                         #take correct answers from a file and save it to array
               uans_arr=(`cat useranswer.txt`)                                     #similarly take usersanswer into another array
              
               var=0
               count=0

               for k in `seq 5 5 $total_lines`
               do  
                    if [ $var -le $((${#cans_arr[@]}-1)) ]                         #similar to test section
                    then
                   
                        head -$k questionbank.txt | tail -5
               
                       echo "Your answer : ${uans_arr[$var]}"                      #display useranswer from array
                       echo "Correct answer : ${cans_arr[$var]}"                   #display correct answer from respective array

                          if [ ${cans_arr[$var]} = ${uans_arr[$var]} ]             #if correctanswer=useranswer
                          then
                          echo -e "\e[32m CORRECT \e[39m"                          #print correct
                          count=$(($count+5))                                      #add to count
                    
                          elif [ ${uans_arr[$var]} = "e" ]                         #if it is equal to e
                          then
                          echo -e "\e[34m TIMEOUT \e[39m"                          #print timeout
                          
                          else
                          echo -e "\e[31m WRONG \e[39m"                            #others wrong
                          fi
                    fi
                      var=$(($var+1))                                     
               done
                    
               echo  -e "\e[93m YOUR TOTAL MARKS =$count/25\e[39m"            #displays total
                         
                         if [ $count -ge 15 ]
                         then
                             echo -e "\e[35m RESULT : PASS\e[39m "
                             echo -e "\e[92mCONGRATULATIONS !!!!!\e[39m"
                         else
                             echo -e "\e[35m RESULT : FAIL\e[39m "
                             echo -e "\e[91m BETTER LUCK NEXT TIME\e[39m"
           
                         fi
              ;; 
           2)exit;;
           
           *)echo "INCORRECT OPTION.kindly choose any one option from above menu";;
       
       esac

       ;;

    3)exit
        ;;
    *) echo "INCORRECT OPTION.Please select one from above options"    
        ;;
esac

    read -p  " Do you want to go to main menu (y/n) " choose
done  
