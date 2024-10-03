//EXTERN --> global var



//CHANGING GLBAL VARIABLE VALUE INSIDE LOCAL


/*
#include<stdio.h>

int x=10;

void foo()
{
    printf("FROM FOO:%d\n",x); //prints 25
}

int main()
{
    extern int x;    //extern looks for prev visible def
    x=25;            //changing value of global varinside local scope is not error ,but not preferred
    foo();
    printf("FROM MAIN:%d\n",x);  //25
    return 0;
}


//ERROR--> 2 X VALUES ARE THERE WITHIN THE SCOPE


#include<stdio.h>

int x=25;

void foo()
{
    printf("FROM FOO:%d\n",x); //prints 25
}

int main()
{
    int x=10;            //local variable
    extern int x;        //bringing the global variable ,as linkage is there
                         //2 variable with same name is there is in this scope , so cpmpiler will be confused which one to consider,
                         //throws error 
    foo();
    printf("FROM MAIN:%d\n",x); 
    return 0;
}

*/

//ERROR-->  X VALUES is linked /export to local scope 


#include<stdio.h>

int x=10;

void foo()
{
    printf("FROM FOO:%d\n",x); //prints 10
}

int main()
{
    int x=25;                 //local variable
    { 
         extern int x;        //bringing the global variable ,as linkage is there
                         //1 variable is there is in this scope ,so its mapped to global and exported here
    foo();
    printf("FROM MAIN:%d\n",x);  //10
    }
    return 0;
}
