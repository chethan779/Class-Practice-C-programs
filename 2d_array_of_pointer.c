#include<stdio.h>

int main(){
    int arr[2][3];
    int *ptr;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    ptr=&arr[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d ",*(ptr + i * 3 + j));
        }
        printf("\n");
    }
    
    printf("%d ",arr);
    printf("%d ",(arr+1));

    return 0; 
}