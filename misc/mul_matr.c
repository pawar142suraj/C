#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 3
int main()
{
	int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2];
	int i,j,k;


	printf("Enter first matrix:\n");
	for(i=0;i<ROW1;i++)
		for(j=0;j<COL1;j++)
			scanf("%d",&mat1[i][j]);

	printf("Enter Second matrix:\n");
	for(i=0;i<ROW2;i++)
		for(j=0;j<COL2;j++)
			scanf("%d",&mat2[i][j]);

	printf("Multiplied matrix is:\n");
	for(i=0;i<ROW1;i++)
		for(j=0;j<COL2;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<COL1;k++)
				mat3[i][j] += mat1[i][k] * mat2[k][j];
		}

	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
			printf("%d ",mat3[i][j]);
	printf("\n");
	}


	return 0;
}
