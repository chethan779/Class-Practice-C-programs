#include<stdio.h>

int addition(int *a,int *b);

int main(){
    int r,t;
    r=10;

    printf("Enter 1:\n");
    scanf("%\f", &r);

    printf("Enter no. 2:\n");
    scanf("%f", &t);

    addition(&r,&t);
    return r;

}

int addition(int *a, int *b){
    *a=8;
    return (*a+*b);
}
