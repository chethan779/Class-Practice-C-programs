#include<stdio.h>

int selection_sort_descending(int n,int *arr)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j)  && *(arr + j) % 2 == 0)
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
            }
        }
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
    
    selection_sort_descending(n,array);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}