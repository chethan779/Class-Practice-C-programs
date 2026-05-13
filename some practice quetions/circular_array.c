#include<stdio.h>

int circular(int n,int* arr)
{
    int last = *(arr + n - 1);
    for (int i = n; i > 0; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }
    
    *arr = last;
    
}


int main(){
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d", &n);
    
    int array[n];
   printf("Enter %d elements here : ",n);
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &array[i]);
    }
    
    circular(n,array);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}