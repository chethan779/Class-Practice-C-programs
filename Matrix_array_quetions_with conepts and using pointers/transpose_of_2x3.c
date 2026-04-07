#include<stdio.h>


void transpose(int r,int c,int array[r][c])
{
    int transpose[c][r];
    for (int i = 0; i < r; i++)
    {printf("\n");
        for (int j = 0; j < c; j++)
        {
             transpose[j][i]=array[i][j];  
        }  
    }


    for (int i = 0; i < c; i++)
    {printf("\n");
        for (int j = 0; j < r; j++)
        {
            printf("%d ",transpose[i][j]);
        }  
    }

}

int main(){
    
    int r=2,c=3;

    int matrix[r][c];
    printf("\n");

    printf("Enter a matrix with dimensions %dX%d with %d rows and %d columns:\n",r,c,r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&matrix[i][j]);
        }  
    }
      
    transpose(r,c,matrix);


    
    
    return 0;
}