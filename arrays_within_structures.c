#include<stdio.h>

struct student
{
    int sub[3];
    int total;
};

#include<stdio.h>

int main(){
    struct student st[3];

    for (int i = 0; i < 3; i++)
    {st[i].total=0;
        printf("Enter the marks of student %d here:\n",i+1);
        for (int j = 0; j < 3; j++)
        {   
            scanf("%d",&st[i].sub[j]);
            st[i].total+=st[i].sub[j];
        }
        printf("The total marks of student %d is %d\n",i+1,st[i].total);
    }

    
    
    return 0;
}