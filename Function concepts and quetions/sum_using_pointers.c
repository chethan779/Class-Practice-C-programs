#include<stdio.h>
int sum_using_pointers(int a , int b)
{
    int *ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

   int sum=*ptr1+*ptr2;
    return sum;

}

int main(){
    int *ptr1,*ptr2;
    
    int a,b;

    printf("Enter a and b value with space here:\n");
    scanf("%d %d",&a,&b);

    printf("The sum of a and b is %d",sum_using_pointers(a,b));
  
    return 0;
}