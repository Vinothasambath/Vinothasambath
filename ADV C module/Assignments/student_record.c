/*Documentation
NAME:Vinotha sambath
DATE:22.2.2023
DESCRIPTION:Implementing the student record using array of structures
SAMPLE INPUT & OUTPUT:
Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2

----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.   Name           Maths         Science       Average       Grade
1          Nandhu         99            91            95            A
Do you want to continue to display(Y/y) : n
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student                                           //datatype struct student is defined
{
    int roll_no;
    char name[25];
    float avg;
    char grade;
};

int main()
{
    char op ,entered_name[20];
    int no_of_students, no_of_subjects,i, j, choice, entered_rollno,flag;    
    float sum=0;
    do
    {
    printf("Enter number of students: ");
    scanf("%d",&no_of_students);
    printf("Enter number of subjects: ");
    scanf("%d",&no_of_subjects);
    
    struct student S[no_of_students];                     //array variable S of struct student datatype is created
    char **subjects;
    int **marks;

    subjects=malloc(no_of_subjects*sizeof(char *));      //2D array for subjects
    if( subjects == NULL )
    {
        printf("Memory not allocated\n");
    }
    for( i=0; i<no_of_subjects; i++ )
    {
        subjects[i]=malloc(no_of_students*sizeof(char));
        if( subjects[i] == NULL )
        {
            printf("Received NULL.Memory not allocated\n");
        }
    }
    for( i=0; i<no_of_subjects; i++ )
    {
        printf("Enter name of subject %d: ",(i+1));
        scanf("%s",subjects[i]);
    }
    
    marks=malloc(no_of_students*sizeof(int *));         //2D array for storing marks
    if( marks == NULL )
    {
        printf("Memory not allocated\n");
    }
    for( i=0; i<no_of_students; i++ )
    {
        marks[i]=malloc(no_of_subjects*sizeof(int));
        if( marks[i] == NULL )
        {
            printf("Received NULL.Memory not allocated\n");
        }
    }
    printf("*********ENTER THE STUDENT DEATAILS**********\n");            //getting student details ,calculating avg and grade
    for ( i=0; i<no_of_students; i++ )
    {
        printf("STUDENT %d:\n",(i+1));
        printf("Enter Roll Number: ");
        scanf("%d",&S[i].roll_no);
        printf("Enter Name: ");
        scanf("%s",S[i].name);
        
        sum=0;
        for( j=0; j<no_of_subjects; j++ )
        {
            printf("Enter %s mark: ",subjects[j]); 
            scanf("%d",&marks[i][j]);
            sum=sum+(marks[i][j]);
        }
        S[i].avg=sum/no_of_subjects;
        if( S[i].avg > 90 && S[i].avg <= 100 )
            S[i].grade='S';
        else if( S[i].avg > 80 && S[i].avg <= 90 )
            S[i].grade='A';
        else if( S[i].avg > 70 && S[i].avg <= 80 )
            S[i].grade='B';
        else if( S[i].avg > 60 && S[i].avg <= 70 )
            S[i].grade='C';
        else
            S[i].grade='D';
        printf("\n");
    }

    do
    {
    printf("<<<<<<<<<DISPLAY MENU>>>>>>>>>\n1. All student details\n2. Particular student details\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:                                                                //display menu for all students
        printf("Roll No.   Name           ");
        for(i=0; i<no_of_subjects; i++)
        {
            printf("%-15s",subjects[i]);
        }
        printf("Average       Grade\n");

    for ( i=0; i<no_of_students; i++ )
    {
        printf("%-10d %-15s",S[i].roll_no,S[i].name);
        for( j=0; j<no_of_subjects; j++ )
        {
            printf("%-15d",marks[i][j]);
        }
        printf("%-13g %c\n",S[i].avg,S[i].grade);
    }
    break;
    case 2:
        printf("---Menu for Particular student----\n1. Name.\n2. Roll no.\n");               //particular student
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the name of the student : ");
                scanf("%s",entered_name);
                
                for ( i=0; i<no_of_students; i++ )
                { 
                  int result=strcmp( S[i].name , entered_name );
                  if ( result == 0 )
                  {
                      flag=0;
                      printf("Roll No.   Name           ");                                        //par student based on name
                      for(j=0; j<no_of_subjects; j++)
                      {
                          printf("%-15s",subjects[j]);
                      }
                      printf("Average       Grade\n");
                      printf("%-10d %-15s",S[i].roll_no,S[i].name);
                      for( int k=0; k<no_of_subjects; k++ )
                      {
                          printf("%-15d",marks[i][k]);
                      }
                      printf("%-13g %c\n",S[i].avg,S[i].grade);
                  }
                  else
                      flag=1;
                }
                if ( flag == 1 )
                    printf("Name not present .try with different name \n");
                break;
            case 2:
                printf("Enter the roll no. of the student : ");                             //particular student based on rollno
                scanf("%d",&entered_rollno);
                
                for ( i=0; i<no_of_students; i++ )
                { 
                  if ( entered_rollno == S[i].roll_no )
                  {
                      printf("Roll No.   Name           ");                                        //par student based on name
                      for(j=0; j<no_of_subjects; j++)
                      {
                          printf("%-15s",subjects[j]);
                      }
                      printf("Average       Grade\n");
                      printf("%-10d %-15s",S[i].roll_no,S[i].name);
                      for( int k=0; k<no_of_subjects; k++ )
                      {
                          printf("%-15d",marks[i][k]);
                      }
                      printf("%-13g %c\n",S[i].avg,S[i].grade);
                  }
                  else
                      flag=1;
                }
                if ( flag == 1 )
                    printf("Roll number  not present .try with different one\n");
                break;
        }
    break;
    default:
            printf("Enter a valid DISPLAY MENU option\n");
            break;
    }
    printf("Do you want to go to DISPLAY MENU ? press (y/n):");
    scanf(" %c",&op);
    
    }while( op == 'y' );

    printf("Do you want to enter a new student record --->press (y/n):");
    scanf(" %c",&op);
    }while( op == 'y' ); 
    return 0;
}
        






