#include <stdio.h>
void addition();
int main()
{
	char ch;
	printf("\n1. addition\n");
	printf("choose operation :");
	ch=getchar();
	switch(ch)
	{
		case 'a':
			addition();
			break;
			default :
				printf("invalid choose.");
	}
	
	return 0;
}

void addition()
{
	int a[2][2],b[2][2];
	int i,j;
	printf("\nenter the a matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the b matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int c[2][2];
	int sum;
	printf("\no/p:\n");
//	printf("\no/p:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=a[i][j]+b[i][j];
			c[i][j]=sum;
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}