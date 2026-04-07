#include<stdio.h>


int main()
{
	int matrix1[3][3],matrix2[3][3],mult_matrix[3][3],sum=0,a=0;
	printf("Matrix 1:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Element[%d][%d]:  ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Matrix 2:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Element[%d][%d]:  ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}

	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
		{	sum=0;
			for(int k=0;k<3;k++)
			{	
				sum=sum+(matrix1[i][k]*matrix2[k][j]);
			}
			mult_matrix[i][j]=sum;
			
		}
	}

	for(int i=0;i<3;i++)
	{printf("\n");
		for(int j=0;j<3;j++)
		{
			printf("%d ",mult_matrix[i][j]);	
		}
	}

	return 0;

}