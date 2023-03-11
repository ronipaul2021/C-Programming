#include <stdio.h>
int main()
{
	int row,col;
	printf("enter the number of row :");
	scanf("%d",&row);
	printf("enter the number of coloumn :");
	scanf("%d",&col);
	int a[row][col];
	printf("enter the matrix :\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	int c[row][col];
	printf("\ntranspose of the matrix is :\n");
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			c[i][j]=a[j][i];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
    return 0;
}