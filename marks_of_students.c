#include<stdio.h>
void Entry_of_marks(int array[],int subjects)
{
    int sum=0;
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < subjects; i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
}

void sum(int array[],int subjects)
{
    int sum=0;
    for (int i = 0; i < subjects; i++)
    {
        sum+=array[i];
    }
}


int main(){
    int marks[5],subjects=5,sum=0,avg;    
    avg=sum/subjects;
    
    printf("The sum of the 5 subject marks is: %d\n",sum);
    printf("The average marks is: %d\n", avg);

    
    return 0;
}