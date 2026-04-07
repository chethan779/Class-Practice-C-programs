#include<stdio.h>

void sum(int *a ,int *b,int result)
{
    *a=21;
    result=*a + *b;
}


int main(){
    int *num1,*num2,result=0;

    printf("Enter number 1 and number 2 here: ");
    scanf("%d%d",&num1,&num2);

    sum(*num1,*num2,result);
    
    printf("The sum of %d and %d is %d",num1,num2,result);
    return 0;
}


