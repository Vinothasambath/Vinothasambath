//STATIC EXAMPLES


#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i)
    {
       main();    //calls main till if(0) ,after all function call are returned,stack frame gets destroyed one by one ,rest of the statements are executed  
    }
    printf("i %d\n", i); //prints 0 0 0 0 0;
return 0;
}

/*


#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i)
    {
       return main();   //function is called , but stackframe gets deleted as return key word is given 
    }
    printf("i %d\n", i);  //prints 0
return 0;
}
*/

