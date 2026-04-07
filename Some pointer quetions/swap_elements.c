#include<stdio.h>

int main(){
    int a=10,b=20;
    int *ptr1,*ptr2,temp;

    ptr1=&a;
    ptr2=&b;

    printf("The values of a and b before swapping %d\t%d\n", a , b);
    printf("The address of a and b before swapping is: %p\t%p\n", ptr1,ptr2);

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("The values of a and b after swapping %d\t%d\n", a , b);
    printf("The address of a and b after swapping is: %p\t%p\n", ptr1,ptr2);
    
    
    return 0;
}