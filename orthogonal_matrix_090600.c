#include <stdio.h>
int main()
{
	int a[3][3];
	int i,j,k;
	//matrix calling from user 
	printf("enter matrix in order of 3 :\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	// matrix form 
	printf("matrix form is :\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	// finding transpose of matrix
	int b[3][3];
	printf("transpose matrix is :\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	// multiplication of matrix

	int c[3][3];
	int sum;
	printf("orthogonal matrix :\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=0;
			for(int k=0;k<3;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
			printf("%d\t",c[i][j]);
			sum=0;
		}
		printf("\n");
	}
	return 0;
}