#include<stdio.h>
#include<math.h>


int main(){
    int num;
    printf("Enter ur num : ");
    scanf("%d", &num);

    int rem , rev = 0;
    int num1 = num ;
    while(num1!=0)
    {

        rem = num1 % 10;
        rev=rev*10+rem;   // Example : 153 ----> 0+3 --> 3*10 + 5 = 35 --> 35*10 + 1 --> 351
        //rev += rem * pow(10,count);
        num1 /= 10;
    }

    printf("\n\n The reversed number is : %d\n",rev);
    

    if(num == rev)
    {
        printf("It is a palindrome numbere !!!!");
    }
    return 0;
}