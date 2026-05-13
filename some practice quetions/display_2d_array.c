#include<stdio.h>

int read(int rows , int cols ,int* A)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element at [%d][%d] : ",i,j);
            scanf("%d",(A + i * cols + j));
        }
    }
    
}

int display(int rows , int cols , int* A)
{
    for (int i = 0; i < rows; i++)
    {printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",A[i * cols + j]);
        }
    }
}

int main(){
    int row , col;
    printf("Enter the number of rows and cols : ");
    scanf("%d %d", &row,&col);
    
    int array1[row * col];

    read(row,col,array1);
    display(row,col,array1);
    
    return 0;
}