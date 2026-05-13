#include<stdio.h>
#include<string.h>
int main(){

    char str[100];

    scanf("%[^\n]",str);

    int count[10] = {0};

    for (int i = 0; i < strlen(str); i++)
    {   if (str[i] >= '0' && str[i] <= '9')
            count[str[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",count[i]);
    }
       
}