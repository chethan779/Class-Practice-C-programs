#include<stdio.h>

int sum_of_indv_digits(int num)
{
    int sum = 0 , rem;

    while (num!=0)
    {
        rem = num % 10;
        sum += rem;
        num/=10;
    }
    return sum;
}
int main(){
    int num;
    printf("Enter the positive number here : ");
    scanf("%d", &num);

    int sum = sum_of_indv_digits(num);

    printf("The individual sum of the number %d is %d",num,sum);

    return 0;
}