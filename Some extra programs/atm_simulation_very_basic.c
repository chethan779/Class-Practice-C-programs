#include<stdio.h>

int main()
{
    int flag,flag1=0;
    float balance=0,accdep,accwit;

    printf("Enter UR initial account balance: \n");
    scanf("%f",&balance);

    

    while (flag1==0)
    {printf("Enter 1 for depositing money and 2 for withdrawing money and 3 for ending the transaction!!!: \n");
    scanf("%d",&flag);
    
    if(flag==1)
    {
        printf("Enter the amount u wanna deposit: \n");
        scanf("%f",&accdep);
        balance=balance+accdep;
        printf("YOUR ACCOUNT BALANCE IS:  %.2f\n",balance);
    }
    else if(flag==2)
    {
        printf("Enter the amount u wanna withdraw: \n");
        scanf("%f",&accwit);

        if(accwit<balance)
        {
            balance=balance-accwit;
            printf("YOUR ACCOUNT BALANCE IS:  %.2f\n",balance);
        }
        else
        {
            printf("bro ur balance is %f !!!! Enter a valid amount : \n",balance);
            scanf("%f",&accwit);
        }
    }
    else if(flag==3)
    {
        flag1=1;
    }
    
    else
    {
        printf("Please enter a valid number 1 , 2 or 3 to deposit or withdraw or to end the transaction!!! \n");
    }
    }
    printf("Thank you for depositing or withdrawing , Your all Transactions are succesful Have a nice day!!! :) \n");
    printf("YOUR FINAL ACCOUNT BALANCE IS:  %.2f\n",balance);

}