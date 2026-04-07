#include<stdio.h>

int main(){
    char arr[]={'h','e','l','l','o','\0'};
    char *arr1[6][5]={"\thello","world","hi"};

    printf("The first char is %c\n", *arr1[1]);
    return 0;
}