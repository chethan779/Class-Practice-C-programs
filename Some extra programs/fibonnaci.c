#include<stdio.h>

int main(){
    int fib_numbers[40],f0=0,f1=1,fib;

    for(int i=0;i<40;i++)
    {
        fib_numbers[i]=f0;
        fib=f0+f1;
        f0=f1;
        f1=fib;
    }
   
    for (int i = 0; i < 40; i++)
        printf("%d ",fib_numbers[i]);
    return 0;
}