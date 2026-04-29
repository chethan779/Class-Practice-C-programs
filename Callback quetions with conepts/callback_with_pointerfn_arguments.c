#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int (*getoperation(char op))(int,int){
    if(op=='+') {return &add;}
    else if(op=='-') {return &subtract;}
    else {return NULL;}
}

int main()
{
    //get the func pointer based on op 

    int (*operation)(int,int)=getoperation('+');
    if (operation) 
    printf("Result : %d\n",operation(7,9));
    else 
    printf("Invalid operation\n");

}