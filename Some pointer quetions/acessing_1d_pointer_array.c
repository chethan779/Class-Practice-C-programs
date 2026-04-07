#include<stdio.h>

int main(){
    int arr[]={10,20,30,40};
    int *ptr=arr;
    printf("The value at position  %d\n", *ptr);
    printf("The value at position  %d\n", *(ptr)+1);
    printf("The address stored int he pointer %p\n",ptr);
    printf("%d\n", *(ptr+1));

    return 0;
}