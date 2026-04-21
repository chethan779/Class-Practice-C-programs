#include<stdio.h>


struct student
{
    int roll;
    int name[20];
    int marks;
};

int find_avg(struct student* ptr,int n){  
    struct student S[10]={{1,"rama",78},{2,"bheema",40},{3,"shaama",67},{4,"Bhama",66}}; // Array of structure variables 
    struct student* p=S;

    for (int i = 0; i < 4; i++)
    {
        printf("\nDetails of student %d\n",i);
        printf("\n%d\t",(p+i)->roll);                         //(p+i).roll will throw error
        printf("%d\t",(p+i)->marks);                          //*(p+i) will throw error
        printf("%s\n",(p+i)->name);
    }
    
    return 0;
}