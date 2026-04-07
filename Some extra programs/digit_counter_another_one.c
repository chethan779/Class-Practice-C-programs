#include<stdio.h>

int main()
{
    int num,num1,count=0;

    printf("Enter ur number here: \n");
    scanf("%d",&num);

    num1=num%10;
    if(num1%2==0)
    {
        while (num>0)
        {
            count+=1;
            num=num/10;

        }
        printf("The number of digits in the input number is: %d",count);
    }
    else
    {
        printf("The number is an odd number so i cant do it!!!!\n");

    }

}