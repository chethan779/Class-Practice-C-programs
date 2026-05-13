#include<stdio.h>


int main(){

    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    char ch = '*';

    for (int i = 0; i < n; i++)
    {   printf("%*s",n-i,"");
        for (int j = 0; j < 2*i-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n; i > 0; i--)
    {   printf("%*s",n-i,"");
        for (int j = 2*i-1; j > 0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}