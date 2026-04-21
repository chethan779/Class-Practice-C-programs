#include<stdio.h>

struct student
{
    int marks[3];
    int total;
}st1[3]={{{98,89,99},0},{{89,87,96},0},{{98,89,95},0}}; // THIS IS INITIALIZATION OF ARRAY OF STRUCTURES CONTAINING ARRAY OF MEMBERS INSIDE IT

int main(){
    struct student st[3];

    // for (int i = 0; i < 3; i++)
    // {st[i].total=0;
    //     printf("Enter the marks of student %d here:\n",i+1);
    //     for (int j = 0; j < 3; j++)
    //     {   
    //         scanf("%d",&st[i].marks[j]);
    //         st[i].total+=st[i].marks[j];
    //     }
    //     printf("The total marks of student %d is %d\n",i+1,st[i].total);
    // }
 
    for (int i = 0; i < 3; i++)
    {st1[i].total=0;
        printf("Enter the marks of student %d here:\n",i+1);
        for (int j = 0; j < 3; j++)
        {   
            st1[i].total+=st1[i].marks[j];
        }
        printf("The total marks of student %d is %d\n",i+1,st[i].total);
    }
    
    return 0;
}