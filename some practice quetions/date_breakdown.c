#include<stdio.h>

int year(int days)
{
    return days/365;
}
int months(int days)
{
    int days_remaining = days % 365 ;
    return days_remaining / 30;
}
int days(int day)
{
    int days_remaining = (day % 365) % 30;
    return days_remaining;
}

int main(){
    int total_days;

    printf("Enter the total number of days : ");
    scanf("%d", &total_days);

    printf("%d YEARS\n%d MONTHS\n%d DAYS",year(total_days),months(total_days),days(total_days));
    return 0;
}