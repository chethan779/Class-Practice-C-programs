#include<stdio.h>

typedef struct{
    int id;
    char name[50];     // SIZE OF STRUCTURE IS 60 AS TILL $* CHAR WILL OCCUPY AND FOR REMAINING 2 padding happens and alloctes 4 bytes giving 52 as size
    float marks;
}My_student;

typedef int myInt; // Or typedef float myInt(Just nickname) works too
//Nicknamee for int is myInt
int main(){
    My_student s1; 

    /*Instead of struct Student s1*/
    /*typedef stands for tpe definition
    and it allows us to create a nickname
    or alias for existing data type*/

    printf("Typedef in C\n");
    myInt a=2,b=7;
    printf("a and b is: %d and %d\n",a,b);
    printf("The size of struct : %d",sizeof(s1));
    return 0;
}