#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    int sum;

    for (int i = 0; i < argc; i++)
    {
        sum+=atoi(argv[i]);
    }
    printf("Sum of command line arg are %d\n",sum );
    
    return 0;
}