#include<stdio.h>

int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}


int main(){
    int num;

    printf("Enter ur number here for factorial: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d: ",num,fact(num));
    return 0;
}