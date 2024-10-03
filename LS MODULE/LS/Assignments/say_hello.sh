<<Documentation
NAME:Vinotha sambath
DATE:29.11.2022
DESCRIPTION:script to print greetings based on time
SAMPLE INPUT:whenever a new terminal is opened.(no input)
SAMPLE OUTPUT:Good Morning user, Have nice day!
This is Thursday 08 in June of 2017 (10:44:10 AM)
Documentation

#!/bin/bash

time=` date |tr -s " " | cut -d " " -f4 | cut -d ":" -f1`         #date is sent as i/p(piping) to cut, (space) - delimeter that gives time 
                                                       #time is send as i/p to cut, (:) -delimiter  which gives us only hour and min
                                                       #time is saved in a variable time

day=`date +%A`                           #name of a day in fullform ( %A -options in date command)
onlydate=`date | cut -d " " -f3`         #fetching only date from date command using cut
fullmonth=`date +%B`                     #fullname of month (%B -options from date command)
year=`date | cut -d " " -f6`             #only year cut from date command
onlytime=`date +%r | cut -d " " -f1,-2`  #only time is cut 
user=`whoami`                            #storing username in user variable

                                                
if [ $time -gt 05 -a $time -lt 12 ]                                                #checks if time is between 5 and 12
then

    echo "Good Morning $user,Have a nice day!"
    echo "This is $day $onlydate in $fullmonth of $year ($onlytime)"   

elif [ $time -ge 12 -a $time -le 13 ]                                              #checks time is between 12 and 13
then

    echo "Good Noon $user,Have a nice day!"
    echo "This is $day $onlydate in $fullmonth of $year ($onlytime)"   

elif [ $time -ge 14 -a $time -lt 17 ]                                                #checks if time is between 14 and 17
then

    echo "Good Afternoon $user,Have a nice day!"
    echo "This is $day $onlydate in $fullmonth of $year ($onlytime)"   

elif [ $time -ge 17 -a $time -lt 21 ]                                                #checks if time is between 17 and 21
then

    echo "Good Evening $user,Have a nice day!"
    echo "This is $day $onlydate in $fullmonth of $year ($onlytime)"   

else

    echo "Good Night $user "
    echo "This is $day $onlydate in $fullmonth of $year ($onlytime)"                   #remaining time 
fi




#to display the message in  terminal open the .bashrc file  from userhome 
#and add bash <pathofthisfile> in .bashrc file so that whenever the new shell is launched this file will execute
#and display the message.


