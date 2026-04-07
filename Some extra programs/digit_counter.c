#include<stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter your number here:\n");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        if (num < 0)
        {
            num = -num;
        }
        while (num > 0)
        {
            count += 1;
            num /= 10;
        }
    }

    printf("The number of digits is %d\n", count);
    return 0;
}
