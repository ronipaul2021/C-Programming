#include <stdio.h>
int main()
{
	int a,b;
	char opt;
	printf("enter the first no :");
	scanf("%d",&a);
	printf("choose operator (+,-,*,/):");
	scanf(" %c",&opt);
	printf("enter the second no :");
	scanf("%d",&b);
	if(opt=='+')
	{
		printf("\nsum=%d",a+b);
	}
	else if(opt=='-')
	{
		printf("\nsubstraction=%d",a-b);
	}
	else if(opt=='*')
	{
		printf("\nmultipication=%d",a*b);
	}
	else if(opt=='/')
	{
		printf("\ndivision=%d",a/b);
	}
	return 0;
}