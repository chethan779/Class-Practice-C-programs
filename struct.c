#include<stdio.h>

struct student
{
    int roll;
    float marks;
    char name[20];
}s2={110,93,"Arthur"},s4;

struct books
{
    char title[50];
    char Author[20];
    float price;
}b1,b2={"They both die at the end","unknown",350};



int main(){
    struct student s1;

    scanf("%d %f %s", &s1.roll,&s1.marks, s1.name);
    printf("%d %.2f %s\n",s1.roll,s1.marks,s1.name);

    printf("%d %.2f %s",s2.roll,s2.marks,s2.name);

//    s4.name="David";  you cant initialize the strin char coz its a constant to overcome this u need to do strcpy

    // s2={110,93,"Arthur"}; you cant initialize in main()
    strcpy(s4.name,"David");
    s4.roll=345;
    s4.marks=98;
    
    
    return 0;
}