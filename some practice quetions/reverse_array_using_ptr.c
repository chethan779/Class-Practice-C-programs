#include<stdio.h>

int reverse(int n , int* arr)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n- i - 1) = temp;
    }
}

int main(){
    int n;
    printf("Enter thr number of elements : ");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d elements in an array : \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    reverse(n,array);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}