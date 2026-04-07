#include<stdio.h>
int swap(int a,int b)
{
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
}


int main(){
    int a,b;
    printf("Enter a and b value with space here:\n");
    scanf("%d %d",&a,&b);

    swap(a,b);

    return 0;
}