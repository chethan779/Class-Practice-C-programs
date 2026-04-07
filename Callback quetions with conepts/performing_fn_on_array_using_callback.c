#include<stdio.h>

void callback(int array[],int n,int (*ptr)(int))
{
    for (int i = 0; i < n; i++)
    {
        array[i]=ptr(array[i]);
    }

}


int square(int x)
{
    return x*x;
}



int main(){
    int n;
    printf("Enter number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements in matrix:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int (*ptr)(int)=square;

    printf("After squaring matrix elements we get:\n");
    callback(arr,n,ptr);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    return 0;
}