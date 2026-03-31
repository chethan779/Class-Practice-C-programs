#include<stdio.h>

int main(){
    int a=64206;
    int *ptr;
    ptr=&a;

    printf("The hexadecimal od %d is %p ",*ptr,*ptr);
    
    return 0;
}