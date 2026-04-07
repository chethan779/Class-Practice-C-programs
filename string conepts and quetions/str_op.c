#include<stdio.h>
#include<string.h>
int main(){
    char a[]={'a','t','m','a','\0'} ;

    printf("%d\n",strlen(a));
    printf("%d\n",sizeof(a));
    
    return 0;
}