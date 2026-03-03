#include<stdio.h>
#include"support.c"

int main(){
    register int count=0;
    
    extern void display();
           extern int y;
           printf("Value of y in support file is %d",y);
    
    return 0;
}