#include <stdio.h>
void prime();
int main()
{
	prime();
	return 0;
}

void prime()
{
	int n;
	int i,j;
	printf("enter the n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		printf("%d  ",i);
	}
}