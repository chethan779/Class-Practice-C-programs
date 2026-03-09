#include<stdio.h>
int main()
{
int *ptr[5];
int arr[5]={1,2,3,4,5};

for (int i = 0; i < 5; i++)
{
    ptr[i]=&arr[i];
    printf("%p\n",ptr[i]);
}

}