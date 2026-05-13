#include<stdio.h>

void string_reversal(char* ptr)
{
    char* start = ptr;
    int count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    char temp;
    for (int i = 0; i < count/2; i++)
    {
        temp = *(start + i);
        *(start + i) = *(start + count - 1 - i);
        *(start + count - 1 - i) = temp;
    }
    
}


int main(){
    char str[20];

    printf("Enter ur string here : ");
    scanf("%s", str);

    string_reversal(str);

    printf("The reversed string is : %s",str);

    return 0;
}