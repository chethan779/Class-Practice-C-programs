#include<stdio.h>

void doublearray(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        *(arr+i) *=2;
    }
}
int main(){
    int arr1[5]={1,2,3,4,5};

    doublearray(arr1,5);


    printf("Modified array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr1[i]);
    }
    
    return 0;
}

