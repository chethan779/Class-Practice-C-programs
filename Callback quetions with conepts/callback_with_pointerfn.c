#include<stdio.h>


void hello()
{
    printf("Hello World\n");
}

void callback(void (*ptr1)( ),int (*ptr2)(int,int)){
    printf("Calling a function with its pointer\n");

    (*ptr1)();  // calling the callback func.
}


int sum(int a, int b)
{
    return a+b;
}
int main(){
    void (*ptr)()=hello;
    int (*ptr2)(int,int)=sum;
    printf("%d\n",(*ptr2)(67,69));
    (*ptr)();
    callback(ptr,ptr2);

    return 0;

}