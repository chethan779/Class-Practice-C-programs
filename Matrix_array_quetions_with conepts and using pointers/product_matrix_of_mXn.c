#include<stdio.h>


int main()
{
    int r1,c1,r2,c2;
    printf("The row and column of matrix 1: ");
    scanf("%d",&r1);
    scanf("%d",&c1);

    printf("The row and column of matrix 2: ");
    scanf("%d",&r2);
    scanf("%d",&c2);


	int matrix1[r1][c1],matrix2[r2][c2],sum=0,a=0;
	printf("Matrix 1:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("Element[%d][%d]:  ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Matrix 2:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("Element[%d][%d]:  ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}

    if(c1 == r2)
    {
    int mult_matrix[r1][c2];
	for(int i=0;i<r1;i++)
	{
	    for(int j=0;j<c2;j++)
		{	sum=0;
			for(int k=0;k<c1;k++)
			{	
				sum=sum+(matrix1[i][k]*matrix2[k][j]);
			}
			mult_matrix[i][j]=sum;	
		}
	}

	for(int i=0;i<r1;i++)
	{printf("\n");
		for(int j=0;j<c2;j++)
		{
			printf("%d ",mult_matrix[i][j]);	
		}
	}
    }

    else
        {printf("The dimensions of two matrices does'nt satisfy the condition c1=r2 therefore no product is possible");}

	return 0;

}