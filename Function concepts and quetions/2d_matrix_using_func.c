#include<stdio.h>



int read_function(int r,int c,int array[][100])
{   
    printf("Enter a matrix of %dX%d dimensions:\n",r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
}

int dislay_function(int r,int c,int array[r][c])
{    for (int i = 0; i < r; i++)
    {printf("\n");
        for (int j = 0; j < c; j++)
        {
            printf("%d ",array[i][j]);
        }
    }}

    
int main(){
    int r,c;
    printf("Enter the row and column here:");
    scanf("%d",&r);
    scanf("%d",&c);
    int array[100][100];
    
    read_function(r,c,array);

    dislay_function(r,c,array);

    
    return 0;
}