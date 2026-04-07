#include<stdio.h>

int reverse(int n,int rev)
{
if(n == 0)
        return rev;

    int rem = n % 10;
    rev = rev * 10 + rem;

    return reverse(n/10, rev);
}



int main(){
    int num = 123;

    int result = reverse(num,0);

    printf("Reversed number = %d", result);

    return 0;
}