#include <stdio.h>
// addition operation
int main()
{
	int row,col;
//	int i,j;
	printf("\nenter rows:");
	scanf("%d",&row);
	printf("\nenter columns:");
	scanf("%d",&col);
	int a[row][col];
	printf("enter frist matrix :\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
/*	printf("\noutput is :\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}*/
	int b[row][col];

	printf("enter second matrix :\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int c[row][col];

	printf("\nsum of two matrix is :\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}