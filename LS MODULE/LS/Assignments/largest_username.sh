<<Documentation
NAME:Vinotha sambath
DATE:28.11.2022
DESCRIPTION:Display the longest and shortest user-names on the system
SAMPLE INPUT:
SAMPLE OUTPUT:The Longest Name is: speech-dispatcher
              The Shortest Name is:lp
Documentation

#!/bash/bin                                      #she-bang line

arr=(`cut -d ":" -f1 /etc/passwd`)               # taking the first field from /etc/passwd using cut command ,: is the delimiter 
                                                 #shell performs the cut operation first as backtick is used
                                                 #the usernames are stored in an array
   
    long=${arr[0]}                               #storing first element of array as long(variable)          
    short=${arr[0]}                              #similarly short

   for i in ${arr[@]}                            #taking array element is loop with a variable i
do
    if [ ${#long} -lt  ${#i} ]                    #checks if length of long is less than array element.( # indicates length ) 
    then 
        long=$i                                   #if the condition is true ,update the long with new element  from array(longest one) 
    fi

    if [ ${#short} -gt  ${#i} ]                   #similar to long, here short is updated whnever a new short array element is encountered 
    then 
        short=$i                                   #update short
    fi
done                                               
echo "The Longest Name is: $long               
The Shortest Name is: $short"



