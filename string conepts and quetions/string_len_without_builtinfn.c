#include<stdio.h>

int my_strlen(char* ptr1)
{
    int count = 0;
    while (*ptr1!='\0')
    {
        count++;
        ptr1++;
    }
    return count;
}


int main(){
    char str[]="PES UNIVERSITY";
    
    printf("The length of string is %d",my_strlen(str));
    return 0;
}