<<Documentation
NAME:Vinotha sambath
DATE:3.12.2022
DESCRIPTION:a script to determine whether a given file system or mount point is mounted
SAMPLE INPUT:./mounted_fs.sh /dev/sda2
SAMPLE OUTPUT:File-system /dev/sda2 is mounted on / and it is having 98%
used space with 3298220 KB free.
Documentation

#!/bin/bash
if [ $# -gt 0 ]         #checking if cla is passed
then
  
     file_sys=(`df | tr -s " " | cut -d " " -f1`)    # saving the first feild in the df command in an array
    mountd_on=(`df | tr -s " " | cut -d " " -f6`)    #saving 6th feild in an array,tr-s supresses multiple space to single space
        used=(`df | tr -s " " | cut -d " " -f5`)     #df command contains info about file system
   free_space=(`df | tr -s " " | cut -d " " -f4`)    #4 arrays are taken to save different field as defined by ARRAY NAME
   
                
            for i in `seq 1 $((${#file_sys[@]}-1))`   #loop executes 1 to arraylenth-1 times
            do
                if [ $1 = ${file_sys[$i]} ]               #if cla is equal to array elements (to check file system is mounted)
                 then

                    echo "File system $1 is mounted on ${mountd_on[$i]} and it is having ${used[$i]} used space with ${free_space[$i]} KB free." 
                                        #displays the details of the mounted filesystem with their details taken from respective array
            
                    exit                        #terminates the condition and loop if file is present,thus exiting the script
                fi
            done

            echo " $1 is not mount "   # prints if cla not in the array 
           
else
    echo "Error : Please pass the name of the file-system through command line."
fi
