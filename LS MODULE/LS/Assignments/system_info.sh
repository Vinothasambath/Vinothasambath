<<Documentation
NAME:Vinotha sambath
DATE:30.11.2022
DESCRIPTION:script to print system information using commands
SAMPLE INPUT:
1. Currently logged users
2. Your shell directory
3. Home directory
4. OS name & version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information.
10. Memory Informations
11. File system information.
12. Currently running process.
Enter the choice : 2

SAMPLE OUTPUT:
Your shell directory is /bin/bash
Do you want to continue (y/n) ? y
1. Currently logged users
2. Your shell directory
3. Home directory
4. OS name & version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information.
10. Memory Informations
11. File system information.
12. Currently running process.
Enter the choice : 13
Error : Invalid option, please enter valid option
Documentation

#!/bin/bash
op=y                                            #initializing op=y 
while [ $op = y ]                               #condition y=y true when loop starts
do

echo "1. Currently logged users
2. Your shell directory
3. Home directory
4. OS name & version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information.
10. Memory Informations
11. File system information.
12. Currently running process."

read -p "Enter the choice:" ch                  #reading i/p from user

    case $ch in                                 #passing the input of user to case
    
     1)echo -n "Currently logged users in the system is "
        whoami                                                  
        ;;
    
    2)echo -n "Your shell directory is "
        printenv SHELL                           #environmental vaiable SHELL
        ;;

    3)echo -n "Your home directory is "
        cd ~ ; pwd                               #also can use printenv HOME
        ;;

    4)echo "Your OS name and version is "          
         uname -osv                              # options used with uname ,o-operating system ,s-kernel name ,v-kernel version
        ;;

    5)echo -n "The current working directory is "
        pwd
        ;;

    6)echo "Number of users logged in the system are "
        who
        ;;

    7)echo "All available shells in your system are "
        cat /etc/shells
        ;;

    8)echo "Hardisk information of your system are "
         lshw | head                                        #can also use hwinfo ,piped to head so that first 10 lines will be displayed
        ;;

    9)echo "Your CPU information are"
       cat /proc/cpuinfo | head                              #can also use lscpu  command
        ;;

    10)echo "Memory information of the system are "
       cat /proc/meminfo | head                               #can also use lsmem  command
        ;;

    11)echo "Your file system information is "
        df
        ;;

    12)echo "currently running process in the system is "
        ps
        ;;

    *) echo "Error : Invalid option, please enter valid option"

        ;;
esac

read -p "Do you want to continue(y/n) ? " op                 #prompt for continuing or terminating loop  
done
