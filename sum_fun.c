#include <stdio.h>
int summation(int x, int y);
int main()
{
	int a,b;
	char opt;
	printf("\nenter the first number :");
	scanf("%d",&a);
	printf("choose operator (+,-,*,/) :");
	scanf(" %c",&opt);
	printf("enter the second number :");
	scanf("%d",&b);
	int result;
	result=summation(a,b);
	printf("\nsummation of two numbers is :%d",result);
	return 0;
}

int summation(int x, int y)
{
	int z;
	z=x+y;
	return z;
}