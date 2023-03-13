#include <stdio.h>
void addition();
void substraction();
void multiplication();
void transpose();
int main()
{
	int n;
	printf("\n1. ADDITION (+)\n");
	printf("2. SUBSTRACTION (-)\n");
	printf("3. MULTIPLICATION (*)\n");
	printf("4. TRANSPOSE (t)\n");
	printf("-----------------------");
	printf("\nMatrix operation is in order of 2.\n");
	while(1)
	{
		printf("\nwhat do you want to perform ?\n--->");
    	scanf("%d",&n);
	    switch(n)
	    {
	    	case 1:
		    	addition();
		    	break;
			    case 2:
			    	substraction();
			    	break;
			    	case 3:
				    	multiplication();
				    	break;
					    case 4:
					    	transpose();
					    	break;
				    		default :
						    	printf("you have choose invalid operator.");
    	} 
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

void substraction()
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
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=a[i][j]-b[i][j];
			c[i][j]=sum;
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}

void multiplication()
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
	int sum,k;
	printf("\no/p :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<2;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}

void transpose()
{
	int a[2][2];
	int i,j;
	printf("\nenter the a matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int c[2][2];
	printf("\no/p:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[j][i];
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}