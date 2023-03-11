#include <stdio.h>
int main()
{
	int a[2][2],b[2][2];
	int i,j,k;
	printf("\nenter the first matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nenter the second matrix :\n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");	
	}
	int c[2][2];
	int mul;
	printf("\nmultiplication of two matrics is :\n");
	for(i=0;i<2;i++)// i stands for row
	{
		for(j=0;j<2;j++)// j stands for coloumn
		{
			mul=0;
			for(k=0;k<2;k++)// k stands for changing their position 
			{
				mul=mul+(a[i][k]*b[k][j]);
				
			} 
			c[i][j]=mul; 
			printf("%d ",c[i][j]);
			  
		}
		printf("\n");
	}
//	printf("%d ",c[i][j]);
	return 0;
}