#include<stdio.h>

int main(){
    int count=0;
    char str[]="PES UNIVERSITY";
    char *ptr;
    ptr=str;
    while (*ptr!='\0')
    {
        count++;
        ptr++;
    }
    printf("The length of string is %d",count);
    return 0;
}